// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "pose2_delta_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/pose2_delta_factor.hpp"
#include "sym/pose2_delta_factor_with_jacobians01.hpp"

namespace hyperion {

using namespace sym_hyperion;

auto Pose2DeltaCostFunction::evaluate(Scalar const* const* parameters, Scalar* residuals,
                                      Scalar** jacobians) const -> bool {
  // Create aliases.
  const auto _x = sym::StorageOps<sym::Pose2<Scalar>>::FromStorage(parameters[0]);
  const auto _y = sym::StorageOps<sym::Pose2<Scalar>>::FromStorage(parameters[1]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 1>>{residuals} =
        Pose2DeltaFactor<Scalar>(_x, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<Scalar, 3, 1>>{residuals} = Pose2DeltaFactorWithJacobians01<Scalar>(
      _x, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>, jacobians[0], jacobians[1]);
  return true;
}

}  // namespace hyperion
