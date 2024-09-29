// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "pose3_sensor_euclidean_distance_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/pose3_sensor_euclidean_distance_factor.hpp"
#include "sym/pose3_sensor_euclidean_distance_factor_with_jacobians013.hpp"

namespace hyperion {

using namespace sym_hyperion;

auto Pose3SensorEuclideanDistanceCostFunction::evaluate(Scalar const* const* parameters,
                                                        Scalar* residuals, Scalar** jacobians) const
    -> bool {
  // Create aliases.
  const auto _x = sym::StorageOps<sym::Pose3<Scalar>>::FromStorage(parameters[0]);
  const auto _x_T_s = sym::StorageOps<sym::Pose3<Scalar>>::FromStorage(parameters[1]);
  const auto _y = sym::StorageOps<sym::Pose3<Scalar>>::FromStorage(parameters[2]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 1>>{residuals} = Pose3SensorEuclideanDistanceFactor<Scalar>(
        _x, _x_T_s, s_d_y_, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<Scalar, 1, 1>>{residuals} =
      Pose3SensorEuclideanDistanceFactorWithJacobians013<Scalar>(
          _x, _x_T_s, s_d_y_, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>, jacobians[0],
          jacobians[1], jacobians[2]);
  return true;
}

}  // namespace hyperion
