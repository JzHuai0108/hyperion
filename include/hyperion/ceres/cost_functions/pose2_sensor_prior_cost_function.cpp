// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "pose2_sensor_prior_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/pose2_sensor_delta_factor.hpp"
#include "sym/pose2_sensor_delta_factor_with_jacobians01.hpp"

namespace hyperion::ceres {

using namespace sym_ceres;

auto Pose2SensorPriorCostFunction::Evaluate(double const* const* parameters, double* residuals,
                                            double** jacobians) const -> bool {
  // Create aliases.
  const auto _x = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[0]);
  const auto _x_T_y = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[1]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<double, 3, 1>>{residuals} =
        Pose2SensorDeltaFactor<double>(_x, _x_T_y, y_, sqrt_info_, sym::kDefaultEpsilon<double>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<double, 3, 1>>{residuals} =
      Pose2SensorDeltaFactorWithJacobians01<double>(
          _x, _x_T_y, y_, sqrt_info_, sym::kDefaultEpsilon<double>, jacobians[0], jacobians[1]);
  return true;
}

}  // namespace hyperion::ceres
