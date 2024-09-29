// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/rot3.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: rot3_angular_distance_factor
 *
 * Args:
 *     x: Rot3
 *     x_d_y: Matrix11
 *     y: Rot3
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Rot3AngularDistanceFactor(const sym::Rot3<Scalar>& x,
                                                      const Eigen::Matrix<Scalar, 1, 1>& x_d_y,
                                                      const sym::Rot3<Scalar>& y,
                                                      const Eigen::Matrix<Scalar, 1, 1>& sqrt_info,
                                                      const Scalar epsilon) {
  // Total ops: 55

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();

  // Intermediate terms (3)
  const Scalar _tmp0 = _x[0] * _y[0] + _x[1] * _y[1] + _x[2] * _y[2] + _x[3] * _y[3];
  const Scalar _tmp1 = std::min<Scalar>(std::fabs(_tmp0), 1 - epsilon);
  const Scalar _tmp2 =
      4 *
      std::pow(Scalar(2 * std::min<Scalar>(0, (((_tmp0) > 0) - ((_tmp0) < 0))) + 1), Scalar(2)) *
      std::pow(Scalar(std::acos(_tmp1)), Scalar(2)) / (1 - std::pow(_tmp1, Scalar(2)));

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) =
      sqrt_info(0, 0) *
      (-x_d_y(0, 0) +
       std::sqrt(Scalar(
           _tmp2 * std::pow(Scalar(-_x[0] * _y[1] + _x[1] * _y[0] - _x[2] * _y[3] + _x[3] * _y[2]),
                            Scalar(2)) +
           _tmp2 * std::pow(Scalar(_x[0] * _y[2] - _x[1] * _y[3] - _x[2] * _y[0] + _x[3] * _y[1]),
                            Scalar(2)) +
           _tmp2 * std::pow(Scalar(-_x[0] * _y[3] - _x[1] * _y[2] + _x[2] * _y[1] + _x[3] * _y[0]),
                            Scalar(2)) +
           epsilon)));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
