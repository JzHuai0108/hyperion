// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "spline3_pose2_sensor_velocity_local_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/spline3_pose2_sensor_velocity_local_factor.hpp"
#include "sym/spline3_pose2_sensor_velocity_local_factor_with_jacobians23456.hpp"

namespace hyperion {

using namespace sym_hyperion;

auto Spline3Pose2SensorVelocityLocalCostFunction::evaluate(Scalar const* const* parameters,
                                                           Scalar* residuals,
                                                           Scalar** jacobians) const -> bool {
  // Create aliases.
  const auto _x0 = sym::StorageOps<sym::Pose2<Scalar>>::FromStorage(parameters[0]);
  const auto _x1 = sym::StorageOps<sym::Pose2<Scalar>>::FromStorage(parameters[1]);
  const auto _x2 = sym::StorageOps<sym::Pose2<Scalar>>::FromStorage(parameters[2]);
  const auto _x3 = sym::StorageOps<sym::Pose2<Scalar>>::FromStorage(parameters[3]);
  const auto _x_T_s = sym::StorageOps<sym::Pose2<Scalar>>::FromStorage(parameters[4]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 1>>{residuals} =
        Spline3Pose2SensorVelocityLocalFactor<Scalar>(dt_, lambdas_, _x0, _x1, _x2, _x3, _x_T_s,
                                                      velocity_, sqrt_info_,
                                                      sym::kDefaultEpsilon<Scalar>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<Scalar, 3, 1>>{residuals} =
      Spline3Pose2SensorVelocityLocalFactorWithJacobians23456<Scalar>(
          dt_, lambdas_, _x0, _x1, _x2, _x3, _x_T_s, velocity_, sqrt_info_,
          sym::kDefaultEpsilon<Scalar>, jacobians[0], jacobians[1], jacobians[2], jacobians[3],
          jacobians[4]);
  return true;
}

}  // namespace hyperion
