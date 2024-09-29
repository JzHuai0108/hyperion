// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "spline3_r3_acceleration_global_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/spline3_r3_acceleration_global_factor.hpp"
#include "sym/spline3_r3_acceleration_global_factor_with_jacobians2345.hpp"

namespace hyperion {

using namespace sym_hyperion;

auto Spline3R3AccelerationGlobalCostFunction::evaluate(Scalar const* const* parameters,
                                                       Scalar* residuals, Scalar** jacobians) const
    -> bool {
  // Create aliases.
  const auto _x0 = sym::StorageOps<Eigen::Matrix<Scalar, 3, 1>>::FromStorage(parameters[0]);
  const auto _x1 = sym::StorageOps<Eigen::Matrix<Scalar, 3, 1>>::FromStorage(parameters[1]);
  const auto _x2 = sym::StorageOps<Eigen::Matrix<Scalar, 3, 1>>::FromStorage(parameters[2]);
  const auto _x3 = sym::StorageOps<Eigen::Matrix<Scalar, 3, 1>>::FromStorage(parameters[3]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 1>>{residuals} = Spline3R3AccelerationGlobalFactor<Scalar>(
        dt_, lambdas_, _x0, _x1, _x2, _x3, acceleration_, sqrt_info_, sym::kDefaultEpsilon<Scalar>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<Scalar, 3, 1>>{residuals} =
      Spline3R3AccelerationGlobalFactorWithJacobians2345<Scalar>(
          dt_, lambdas_, _x0, _x1, _x2, _x3, acceleration_, sqrt_info_,
          sym::kDefaultEpsilon<Scalar>, jacobians[0], jacobians[1], jacobians[2], jacobians[3]);
  return true;
}

}  // namespace hyperion
