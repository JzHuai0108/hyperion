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
 * Symbolic function: spline4_r1_acceleration
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix43
 *     x0: Matrix11
 *     x1: Matrix11
 *     x2: Matrix11
 *     x3: Matrix11
 *     x4: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Spline4R1AccelerationLocal(
    const Scalar dt, const Eigen::Matrix<Scalar, 4, 3>& lambdas,
    const Eigen::Matrix<Scalar, 1, 1>& x0, const Eigen::Matrix<Scalar, 1, 1>& x1,
    const Eigen::Matrix<Scalar, 1, 1>& x2, const Eigen::Matrix<Scalar, 1, 1>& x3,
    const Eigen::Matrix<Scalar, 1, 1>& x4, const Scalar epsilon) {
  // Total ops: 13

  // Unused inputs
  (void)epsilon;

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) = (lambdas(0, 2) * (-x0(0, 0) + x1(0, 0)) + lambdas(1, 2) * (-x1(0, 0) + x2(0, 0)) +
                lambdas(2, 2) * (-x2(0, 0) + x3(0, 0)) + lambdas(3, 2) * (-x3(0, 0) + x4(0, 0))) /
               std::pow(dt, Scalar(2));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
