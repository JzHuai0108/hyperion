// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.cpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "r3_angular_prior_cost_function.hpp"

#include <sym/ops/storage_ops.h>
#include <sym/util/epsilon.h>

#include "sym/r3_angular_delta_factor.hpp"
#include "sym/r3_angular_delta_factor_with_jacobian0.hpp"

namespace hyperion::ceres {

using namespace sym_ceres;

auto R3AngularPriorCostFunction::Evaluate(double const* const* parameters, double* residuals,
                                          double** jacobians) const -> bool {
  // Create aliases.
  const auto _x = sym::StorageOps<Eigen::Matrix<double, 3, 1>>::FromStorage(parameters[0]);

  // Evaluation without Jacobians.
  if (!jacobians) {
    Eigen::Map<Eigen::Matrix<double, 1, 1>>{residuals} =
        R3AngularDeltaFactor<double>(_x, y_, sqrt_info_, sym::kDefaultEpsilon<double>);
    return true;
  }

  // Evaluation with Jacobians.
  Eigen::Map<Eigen::Matrix<double, 1, 1>>{residuals} = R3AngularDeltaFactorWithJacobian0<double>(
      _x, y_, sqrt_info_, sym::kDefaultEpsilon<double>, jacobians[0]);
  return true;
}

}  // namespace hyperion::ceres
