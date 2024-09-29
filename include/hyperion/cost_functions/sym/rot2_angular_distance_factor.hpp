// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/rot2.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: rot2_angular_distance_factor
 *
 * Args:
 *     x: Rot2
 *     x_d_y: Matrix11
 *     y: Rot2
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Rot2AngularDistanceFactor(const sym::Rot2<Scalar>& x,
                                                      const Eigen::Matrix<Scalar, 1, 1>& x_d_y,
                                                      const sym::Rot2<Scalar>& y,
                                                      const Eigen::Matrix<Scalar, 1, 1>& sqrt_info,
                                                      const Scalar epsilon) {
  // Total ops: 16

  // Input arrays
  const Eigen::Matrix<Scalar, 2, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 2, 1>& _y = y.Data();

  // Intermediate terms (1)
  const Scalar _tmp0 = _x[0] * _y[0] + _x[1] * _y[1];

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) =
      sqrt_info(0, 0) *
      (-x_d_y(0, 0) +
       std::sqrt(Scalar(
           epsilon + std::pow(Scalar(std::atan2(_x[0] * _y[1] - _x[1] * _y[0],
                                                _tmp0 + epsilon * ((((_tmp0) > 0) - ((_tmp0) < 0)) +
                                                                   Scalar(0.5)))),
                              Scalar(2)))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
