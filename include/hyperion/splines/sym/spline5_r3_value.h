// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline5_r3_value
 *
 * Args:
 *     lambdas: Matrix51
 *     x0: Matrix31
 *     x1: Matrix31
 *     x2: Matrix31
 *     x3: Matrix31
 *     x4: Matrix31
 *     x5: Matrix31
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline5R3Value(
    const Eigen::Matrix<Scalar, 5, 1>& lambdas, const Eigen::Matrix<Scalar, 3, 1>& x0,
    const Eigen::Matrix<Scalar, 3, 1>& x1, const Eigen::Matrix<Scalar, 3, 1>& x2,
    const Eigen::Matrix<Scalar, 3, 1>& x3, const Eigen::Matrix<Scalar, 3, 1>& x4,
    const Eigen::Matrix<Scalar, 3, 1>& x5, const Scalar epsilon) {
  // Total ops: 45

  // Unused inputs
  (void)epsilon;

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = lambdas(0, 0) * (-x0(0, 0) + x1(0, 0)) + lambdas(1, 0) * (-x1(0, 0) + x2(0, 0)) +
               lambdas(2, 0) * (-x2(0, 0) + x3(0, 0)) + lambdas(3, 0) * (-x3(0, 0) + x4(0, 0)) +
               lambdas(4, 0) * (-x4(0, 0) + x5(0, 0)) + x0(0, 0);
  _res(1, 0) = lambdas(0, 0) * (-x0(1, 0) + x1(1, 0)) + lambdas(1, 0) * (-x1(1, 0) + x2(1, 0)) +
               lambdas(2, 0) * (-x2(1, 0) + x3(1, 0)) + lambdas(3, 0) * (-x3(1, 0) + x4(1, 0)) +
               lambdas(4, 0) * (-x4(1, 0) + x5(1, 0)) + x0(1, 0);
  _res(2, 0) = lambdas(0, 0) * (-x0(2, 0) + x1(2, 0)) + lambdas(1, 0) * (-x1(2, 0) + x2(2, 0)) +
               lambdas(2, 0) * (-x2(2, 0) + x3(2, 0)) + lambdas(3, 0) * (-x3(2, 0) + x4(2, 0)) +
               lambdas(4, 0) * (-x4(2, 0) + x5(2, 0)) + x0(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
