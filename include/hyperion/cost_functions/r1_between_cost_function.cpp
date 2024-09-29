// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "r1_between_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/r1_between_factor.hpp"
#include "sym/r1_between_factor_with_jacobians02.hpp"

namespace hyperion {

using namespace sym_hyperion;

auto R1BetweenCostFunction::evaluate(Scalar const* const* parameters, Scalar* residuals,
                                     Scalar** jacobians) const -> bool {
  // Create aliases.
  const auto _x = sym::StorageOps<Eigen::Matrix<Scalar, 1, 1>>::FromStorage(parameters[0]);
  const auto _y = sym::StorageOps<Eigen::Matrix<Scalar, 1, 1>>::FromStorage(parameters[1]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 1>>{residuals} =
        R1BetweenFactor<Scalar>(_x, x_T_y_, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<Scalar, 1, 1>>{residuals} = R1BetweenFactorWithJacobians02<Scalar>(
      _x, x_T_y_, _y, sqrt_info_, sym::kDefaultEpsilon<Scalar>, jacobians[0], jacobians[1]);
  return true;
}

}  // namespace hyperion
