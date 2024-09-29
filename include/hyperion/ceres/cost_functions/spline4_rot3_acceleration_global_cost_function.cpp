// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "spline4_rot3_acceleration_global_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/spline4_rot3_acceleration_global_factor.hpp"
#include "sym/spline4_rot3_acceleration_global_factor_with_jacobians23456.hpp"

namespace hyperion::ceres {

using namespace sym_ceres;

auto Spline4Rot3AccelerationGlobalCostFunction::Evaluate(double const* const* parameters,
                                                         double* residuals,
                                                         double** jacobians) const -> bool {
  // Create aliases.
  const auto _x0 = sym::StorageOps<sym::Rot3<double>>::FromStorage(parameters[0]);
  const auto _x1 = sym::StorageOps<sym::Rot3<double>>::FromStorage(parameters[1]);
  const auto _x2 = sym::StorageOps<sym::Rot3<double>>::FromStorage(parameters[2]);
  const auto _x3 = sym::StorageOps<sym::Rot3<double>>::FromStorage(parameters[3]);
  const auto _x4 = sym::StorageOps<sym::Rot3<double>>::FromStorage(parameters[4]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<double, 3, 1>>{residuals} =
        Spline4Rot3AccelerationGlobalFactor<double>(dt_, lambdas_, _x0, _x1, _x2, _x3, _x4,
                                                    acceleration_, sqrt_info_,
                                                    sym::kDefaultEpsilon<double>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<double, 3, 1>>{residuals} =
      Spline4Rot3AccelerationGlobalFactorWithJacobians23456<double>(
          dt_, lambdas_, _x0, _x1, _x2, _x3, _x4, acceleration_, sqrt_info_,
          sym::kDefaultEpsilon<double>, jacobians[0], jacobians[1], jacobians[2], jacobians[3],
          jacobians[4]);
  return true;
}

}  // namespace hyperion::ceres
