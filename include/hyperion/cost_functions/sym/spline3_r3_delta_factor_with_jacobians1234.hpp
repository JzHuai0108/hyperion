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
 * Symbolic function: spline3_r3_delta_factor
 *
 * Args:
 *     lambdas: Matrix31
 *     x0: Matrix31
 *     x1: Matrix31
 *     x2: Matrix31
 *     x3: Matrix31
 *     y: Matrix31
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 *     res_D_x0: (3x3) jacobian of res (3) wrt arg x0 (3)
 *     res_D_x1: (3x3) jacobian of res (3) wrt arg x1 (3)
 *     res_D_x2: (3x3) jacobian of res (3) wrt arg x2 (3)
 *     res_D_x3: (3x3) jacobian of res (3) wrt arg x3 (3)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline3R3DeltaFactorWithJacobians1234(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas, const Eigen::Matrix<Scalar, 3, 1>& x0,
    const Eigen::Matrix<Scalar, 3, 1>& x1, const Eigen::Matrix<Scalar, 3, 1>& x2,
    const Eigen::Matrix<Scalar, 3, 1>& x3, const Eigen::Matrix<Scalar, 3, 1>& y,
    const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x0 = nullptr, Scalar* const res_D_x1 = nullptr,
    Scalar* const res_D_x2 = nullptr, Scalar* const res_D_x3 = nullptr) {
  // Total ops: 84

  // Unused inputs
  (void)epsilon;

  // Input arrays

  // Intermediate terms (6)
  const Scalar _tmp0 = lambdas(0, 0) * (-x0(1, 0) + x1(1, 0)) +
                       lambdas(1, 0) * (-x1(1, 0) + x2(1, 0)) +
                       lambdas(2, 0) * (-x2(1, 0) + x3(1, 0)) + x0(1, 0) - y(1, 0);
  const Scalar _tmp1 = lambdas(0, 0) * (-x0(2, 0) + x1(2, 0)) +
                       lambdas(1, 0) * (-x1(2, 0) + x2(2, 0)) +
                       lambdas(2, 0) * (-x2(2, 0) + x3(2, 0)) + x0(2, 0) - y(2, 0);
  const Scalar _tmp2 = lambdas(0, 0) * (-x0(0, 0) + x1(0, 0)) +
                       lambdas(1, 0) * (-x1(0, 0) + x2(0, 0)) +
                       lambdas(2, 0) * (-x2(0, 0) + x3(0, 0)) + x0(0, 0) - y(0, 0);
  const Scalar _tmp3 = 1 - lambdas(0, 0);
  const Scalar _tmp4 = lambdas(0, 0) - lambdas(1, 0);
  const Scalar _tmp5 = lambdas(1, 0) - lambdas(2, 0);

  // Output terms (5)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp0 * sqrt_info(0, 1) + _tmp1 * sqrt_info(0, 2) + _tmp2 * sqrt_info(0, 0);
  _res(1, 0) = _tmp0 * sqrt_info(1, 1) + _tmp1 * sqrt_info(1, 2) + _tmp2 * sqrt_info(1, 0);
  _res(2, 0) = _tmp0 * sqrt_info(2, 1) + _tmp1 * sqrt_info(2, 2) + _tmp2 * sqrt_info(2, 0);

  if (res_D_x0 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3>> _res_D_x0{res_D_x0};

    _res_D_x0(0, 0) = _tmp3 * sqrt_info(0, 0);
    _res_D_x0(1, 0) = _tmp3 * sqrt_info(1, 0);
    _res_D_x0(2, 0) = _tmp3 * sqrt_info(2, 0);
    _res_D_x0(0, 1) = _tmp3 * sqrt_info(0, 1);
    _res_D_x0(1, 1) = _tmp3 * sqrt_info(1, 1);
    _res_D_x0(2, 1) = _tmp3 * sqrt_info(2, 1);
    _res_D_x0(0, 2) = _tmp3 * sqrt_info(0, 2);
    _res_D_x0(1, 2) = _tmp3 * sqrt_info(1, 2);
    _res_D_x0(2, 2) = _tmp3 * sqrt_info(2, 2);
  }

  if (res_D_x1 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3>> _res_D_x1{res_D_x1};

    _res_D_x1(0, 0) = _tmp4 * sqrt_info(0, 0);
    _res_D_x1(1, 0) = _tmp4 * sqrt_info(1, 0);
    _res_D_x1(2, 0) = _tmp4 * sqrt_info(2, 0);
    _res_D_x1(0, 1) = _tmp4 * sqrt_info(0, 1);
    _res_D_x1(1, 1) = _tmp4 * sqrt_info(1, 1);
    _res_D_x1(2, 1) = _tmp4 * sqrt_info(2, 1);
    _res_D_x1(0, 2) = _tmp4 * sqrt_info(0, 2);
    _res_D_x1(1, 2) = _tmp4 * sqrt_info(1, 2);
    _res_D_x1(2, 2) = _tmp4 * sqrt_info(2, 2);
  }

  if (res_D_x2 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3>> _res_D_x2{res_D_x2};

    _res_D_x2(0, 0) = _tmp5 * sqrt_info(0, 0);
    _res_D_x2(1, 0) = _tmp5 * sqrt_info(1, 0);
    _res_D_x2(2, 0) = _tmp5 * sqrt_info(2, 0);
    _res_D_x2(0, 1) = _tmp5 * sqrt_info(0, 1);
    _res_D_x2(1, 1) = _tmp5 * sqrt_info(1, 1);
    _res_D_x2(2, 1) = _tmp5 * sqrt_info(2, 1);
    _res_D_x2(0, 2) = _tmp5 * sqrt_info(0, 2);
    _res_D_x2(1, 2) = _tmp5 * sqrt_info(1, 2);
    _res_D_x2(2, 2) = _tmp5 * sqrt_info(2, 2);
  }

  if (res_D_x3 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3>> _res_D_x3{res_D_x3};

    _res_D_x3(0, 0) = lambdas(2, 0) * sqrt_info(0, 0);
    _res_D_x3(1, 0) = lambdas(2, 0) * sqrt_info(1, 0);
    _res_D_x3(2, 0) = lambdas(2, 0) * sqrt_info(2, 0);
    _res_D_x3(0, 1) = lambdas(2, 0) * sqrt_info(0, 1);
    _res_D_x3(1, 1) = lambdas(2, 0) * sqrt_info(1, 1);
    _res_D_x3(2, 1) = lambdas(2, 0) * sqrt_info(2, 1);
    _res_D_x3(0, 2) = lambdas(2, 0) * sqrt_info(0, 2);
    _res_D_x3(1, 2) = lambdas(2, 0) * sqrt_info(1, 2);
    _res_D_x3(2, 2) = lambdas(2, 0) * sqrt_info(2, 2);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
