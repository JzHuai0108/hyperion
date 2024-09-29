// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: r3_delta_factor
 *
 * Args:
 *     x: Matrix31
 *     y: Matrix31
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 *     res_D_x: (3x3) jacobian (result_dim x storage_dim) of res (3) wrt arg x (3) (row-major)
 *     res_D_y: (3x3) jacobian (result_dim x storage_dim) of res (3) wrt arg y (3) (row-major)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> R3DeltaFactorWithJacobians01(
    const Eigen::Matrix<Scalar, 3, 1>& x, const Eigen::Matrix<Scalar, 3, 1>& y,
    const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_y = nullptr) {
  // Total ops: 27

  // Unused inputs
  (void)epsilon;

  // Input arrays

  // Intermediate terms (3)
  const Scalar _tmp0 = -x(0, 0) + y(0, 0);
  const Scalar _tmp1 = -x(1, 0) + y(1, 0);
  const Scalar _tmp2 = -x(2, 0) + y(2, 0);

  // Output terms (3)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp0 * sqrt_info(0, 0) + _tmp1 * sqrt_info(0, 1) + _tmp2 * sqrt_info(0, 2);
  _res(1, 0) = _tmp0 * sqrt_info(1, 0) + _tmp1 * sqrt_info(1, 1) + _tmp2 * sqrt_info(1, 2);
  _res(2, 0) = _tmp0 * sqrt_info(2, 0) + _tmp1 * sqrt_info(2, 1) + _tmp2 * sqrt_info(2, 2);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3, Eigen::RowMajor>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = -sqrt_info(0, 0);
    _res_D_x(1, 0) = -sqrt_info(1, 0);
    _res_D_x(2, 0) = -sqrt_info(2, 0);
    _res_D_x(0, 1) = -sqrt_info(0, 1);
    _res_D_x(1, 1) = -sqrt_info(1, 1);
    _res_D_x(2, 1) = -sqrt_info(2, 1);
    _res_D_x(0, 2) = -sqrt_info(0, 2);
    _res_D_x(1, 2) = -sqrt_info(1, 2);
    _res_D_x(2, 2) = -sqrt_info(2, 2);
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3, Eigen::RowMajor>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = sqrt_info(0, 0);
    _res_D_y(1, 0) = sqrt_info(1, 0);
    _res_D_y(2, 0) = sqrt_info(2, 0);
    _res_D_y(0, 1) = sqrt_info(0, 1);
    _res_D_y(1, 1) = sqrt_info(1, 1);
    _res_D_y(2, 1) = sqrt_info(2, 1);
    _res_D_y(0, 2) = sqrt_info(0, 2);
    _res_D_y(1, 2) = sqrt_info(1, 2);
    _res_D_y(2, 2) = sqrt_info(2, 2);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
