// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: r2_between_factor
 *
 * Args:
 *     x: Matrix21
 *     x_T_y: Matrix21
 *     y: Matrix21
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 *     res_D_x: (2x2) jacobian of res (2) wrt arg x (2)
 *     res_D_y: (2x2) jacobian of res (2) wrt arg y (2)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> R2BetweenFactorWithJacobians02(
    const Eigen::Matrix<Scalar, 2, 1>& x, const Eigen::Matrix<Scalar, 2, 1>& x_T_y,
    const Eigen::Matrix<Scalar, 2, 1>& y, const Eigen::Matrix<Scalar, 2, 2>& sqrt_info,
    const Scalar epsilon, Scalar* const res_D_x = nullptr, Scalar* const res_D_y = nullptr) {
  // Total ops: 14

  // Unused inputs
  (void)epsilon;

  // Input arrays

  // Intermediate terms (2)
  const Scalar _tmp0 = x(1, 0) - x_T_y(1, 0) - y(1, 0);
  const Scalar _tmp1 = x(0, 0) - x_T_y(0, 0) - y(0, 0);

  // Output terms (3)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp0 * sqrt_info(0, 1) + _tmp1 * sqrt_info(0, 0);
  _res(1, 0) = _tmp0 * sqrt_info(1, 1) + _tmp1 * sqrt_info(1, 0);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 2>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = sqrt_info(0, 0);
    _res_D_x(1, 0) = sqrt_info(1, 0);
    _res_D_x(0, 1) = sqrt_info(0, 1);
    _res_D_x(1, 1) = sqrt_info(1, 1);
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 2>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = -sqrt_info(0, 0);
    _res_D_y(1, 0) = -sqrt_info(1, 0);
    _res_D_y(0, 1) = -sqrt_info(0, 1);
    _res_D_y(1, 1) = -sqrt_info(1, 1);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
