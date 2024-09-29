// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "r3_angular_distance_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/r3_angular_distance_factor.hpp"
#include "sym/r3_angular_distance_factor_with_jacobians02.hpp"

namespace hyperion::ceres {

using namespace sym_ceres;

auto R3AngularDistanceCostFunction::Evaluate(double const* const* parameters, double* residuals,
                                             double** jacobians) const -> bool {
  // Create aliases.
  const auto _x = sym::StorageOps<Eigen::Matrix<double, 3, 1>>::FromStorage(parameters[0]);
  const auto _y = sym::StorageOps<Eigen::Matrix<double, 3, 1>>::FromStorage(parameters[1]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<double, 1, 1>>{residuals} =
        R3AngularDistanceFactor<double>(_x, x_d_y_, _y, sqrt_info_, sym::kDefaultEpsilon<double>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<double, 1, 1>>{residuals} =
      R3AngularDistanceFactorWithJacobians02<double>(
          _x, x_d_y_, _y, sqrt_info_, sym::kDefaultEpsilon<double>, jacobians[0], jacobians[1]);
  return true;
}

}  // namespace hyperion::ceres
