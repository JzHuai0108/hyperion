// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "spline3_pose3_prior_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/spline3_pose3_delta_factor.hpp"
#include "sym/spline3_pose3_delta_factor_with_jacobians1234.hpp"

namespace hyperion::ceres {

using namespace sym_ceres;

auto Spline3Pose3PriorCostFunction::Evaluate(double const* const* parameters, double* residuals,
                                             double** jacobians) const -> bool {
  // Create aliases.
  const auto _x0 = sym::StorageOps<sym::Pose3<double>>::FromStorage(parameters[0]);
  const auto _x1 = sym::StorageOps<sym::Pose3<double>>::FromStorage(parameters[1]);
  const auto _x2 = sym::StorageOps<sym::Pose3<double>>::FromStorage(parameters[2]);
  const auto _x3 = sym::StorageOps<sym::Pose3<double>>::FromStorage(parameters[3]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<double, 6, 1>>{residuals} = Spline3Pose3DeltaFactor<double>(
        lambdas_, _x0, _x1, _x2, _x3, y_, sqrt_info_, sym::kDefaultEpsilon<double>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<double, 6, 1>>{residuals} =
      Spline3Pose3DeltaFactorWithJacobians1234<double>(lambdas_, _x0, _x1, _x2, _x3, y_, sqrt_info_,
                                                       sym::kDefaultEpsilon<double>, jacobians[0],
                                                       jacobians[1], jacobians[2], jacobians[3]);
  return true;
}

}  // namespace hyperion::ceres
