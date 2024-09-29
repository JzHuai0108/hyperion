// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "spline3_pose2_sensor_relative_between_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/spline3_pose2_sensor_relative_between_factor.hpp"
#include "sym/spline3_pose2_sensor_relative_between_factor_with_jacobians1234589101112.hpp"

namespace hyperion::ceres {

using namespace sym_ceres;

auto Spline3Pose2SensorRelativeBetweenCostFunction::Evaluate(double const* const* parameters,
                                                             double* residuals,
                                                             double** jacobians) const -> bool {
  // Create aliases.
  const auto _x0 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[0]);
  const auto _x1 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[1]);
  const auto _x2 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[2]);
  const auto _x3 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[3]);
  const auto _x_T_a = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[4]);
  const auto _y0 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[5]);
  const auto _y1 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[6]);
  const auto _y2 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[7]);
  const auto _y3 = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[8]);
  const auto _y_T_b = sym::StorageOps<sym::Pose2<double>>::FromStorage(parameters[9]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<double, 3, 1>>{residuals} =
        Spline3Pose2SensorRelativeBetweenFactor<double>(
            lambdas_x_, _x0, _x1, _x2, _x3, _x_T_a, a_T_b_, lambdas_y_, _y0, _y1, _y2, _y3, _y_T_b,
            sqrt_info_, sym::kDefaultEpsilon<double>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<double, 3, 1>>{residuals} =
      Spline3Pose2SensorRelativeBetweenFactorWithJacobians1234589101112<double>(
          lambdas_x_, _x0, _x1, _x2, _x3, _x_T_a, a_T_b_, lambdas_y_, _y0, _y1, _y2, _y3, _y_T_b,
          sqrt_info_, sym::kDefaultEpsilon<double>, jacobians[0], jacobians[1], jacobians[2],
          jacobians[3], jacobians[4], jacobians[5], jacobians[6], jacobians[7], jacobians[8],
          jacobians[9]);
  return true;
}

}  // namespace hyperion::ceres
