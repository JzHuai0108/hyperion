// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "rot2_angular_distance_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/rot2_angular_distance_factor.hpp"
#include "sym/rot2_angular_distance_factor_with_jacobians02.hpp"

namespace hyperion {

using namespace sym_hyperion;

auto Rot2AngularDistanceCostFunction::evaluate(Scalar const* const* parameters, Scalar* residuals,
                                               Scalar** jacobians) const -> bool {
  // Create aliases.
  const auto _x = sym::StorageOps<sym::Rot2<Scalar>>::FromStorage(parameters[0]);
  const auto _y = sym::StorageOps<sym::Rot2<Scalar>>::FromStorage(parameters[1]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 1>>{residuals} =
        Rot2AngularDistanceFactor<Scalar>(_x, x_d_y_, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<Scalar, 1, 1>>{residuals} =
      Rot2AngularDistanceFactorWithJacobians02<Scalar>(
          _x, x_d_y_, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>, jacobians[0], jacobians[1]);
  return true;
}

}  // namespace hyperion
