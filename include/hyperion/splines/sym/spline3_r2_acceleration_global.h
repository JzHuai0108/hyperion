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
 * Symbolic function: spline3_r2_acceleration
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix33
 *     x0: Matrix21
 *     x1: Matrix21
 *     x2: Matrix21
 *     x3: Matrix21
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Spline3R2AccelerationGlobal(const Scalar dt,
                                                        const Eigen::Matrix<Scalar, 3, 3>& lambdas,
                                                        const Eigen::Matrix<Scalar, 2, 1>& x0,
                                                        const Eigen::Matrix<Scalar, 2, 1>& x1,
                                                        const Eigen::Matrix<Scalar, 2, 1>& x2,
                                                        const Eigen::Matrix<Scalar, 2, 1>& x3,
                                                        const Scalar epsilon) {
  // Total ops: 19

  // Unused inputs
  (void)epsilon;

  // Input arrays

  // Intermediate terms (1)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) =
      _tmp0 * (lambdas(0, 2) * (-x0(0, 0) + x1(0, 0)) + lambdas(1, 2) * (-x1(0, 0) + x2(0, 0)) +
               lambdas(2, 2) * (-x2(0, 0) + x3(0, 0)));
  _res(1, 0) =
      _tmp0 * (lambdas(0, 2) * (-x0(1, 0) + x1(1, 0)) + lambdas(1, 2) * (-x1(1, 0) + x2(1, 0)) +
               lambdas(2, 2) * (-x2(1, 0) + x3(1, 0)));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
