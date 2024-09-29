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
 * Symbolic function: r3_angular_distance_factor
 *
 * Args:
 *     x: Matrix31
 *     x_d_y: Matrix11
 *     y: Matrix31
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> R3AngularDistanceFactor(const Eigen::Matrix<Scalar, 3, 1>& x,
                                                    const Eigen::Matrix<Scalar, 1, 1>& x_d_y,
                                                    const Eigen::Matrix<Scalar, 3, 1>& y,
                                                    const Eigen::Matrix<Scalar, 1, 1>& sqrt_info,
                                                    const Scalar epsilon) {
  // Total ops: 28

  // Input arrays

  // Intermediate terms (1)
  const Scalar _tmp0 = x(0, 0) * y(0, 0) + x(1, 0) * y(1, 0) + x(2, 0) * y(2, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) =
      sqrt_info(0, 0) *
      (-x_d_y(0, 0) +
       std::atan2(std::sqrt(Scalar(
                      epsilon + std::pow(Scalar(x(0, 0) * y(1, 0) - x(1, 0) * y(0, 0)), Scalar(2)) +
                      std::pow(Scalar(-x(0, 0) * y(2, 0) + x(2, 0) * y(0, 0)), Scalar(2)) +
                      std::pow(Scalar(x(1, 0) * y(2, 0) - x(2, 0) * y(1, 0)), Scalar(2)))),
                  _tmp0 + epsilon * ((((_tmp0) > 0) - ((_tmp0) < 0)) + Scalar(0.5))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
