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
 *     res_D_x: (1x3) jacobian of res (1) wrt arg x (3)
 *     res_D_y: (1x3) jacobian of res (1) wrt arg y (3)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> R3AngularDistanceFactorWithJacobians02(
    const Eigen::Matrix<Scalar, 3, 1>& x, const Eigen::Matrix<Scalar, 1, 1>& x_d_y,
    const Eigen::Matrix<Scalar, 3, 1>& y, const Eigen::Matrix<Scalar, 1, 1>& sqrt_info,
    const Scalar epsilon, Scalar* const res_D_x = nullptr, Scalar* const res_D_y = nullptr) {
  // Total ops: 81

  // Input arrays

  // Intermediate terms (14)
  const Scalar _tmp0 = x(0, 0) * y(1, 0) - x(1, 0) * y(0, 0);
  const Scalar _tmp1 = -x(0, 0) * y(2, 0) + x(2, 0) * y(0, 0);
  const Scalar _tmp2 = x(1, 0) * y(2, 0) - x(2, 0) * y(1, 0);
  const Scalar _tmp3 = std::pow(_tmp0, Scalar(2)) + std::pow(_tmp1, Scalar(2)) +
                       std::pow(_tmp2, Scalar(2)) + epsilon;
  const Scalar _tmp4 = std::sqrt(_tmp3);
  const Scalar _tmp5 = x(0, 0) * y(0, 0) + x(1, 0) * y(1, 0) + x(2, 0) * y(2, 0);
  const Scalar _tmp6 = _tmp5 + epsilon * ((((_tmp5) > 0) - ((_tmp5) < 0)) + Scalar(0.5));
  const Scalar _tmp7 = 2 * _tmp0;
  const Scalar _tmp8 = 2 * _tmp1;
  const Scalar _tmp9 = (Scalar(1) / Scalar(2)) / (_tmp4 * _tmp6);
  const Scalar _tmp10 = std::pow(_tmp6, Scalar(2));
  const Scalar _tmp11 = _tmp4 / _tmp10;
  const Scalar _tmp12 = _tmp10 * sqrt_info(0, 0) / (_tmp10 + _tmp3);
  const Scalar _tmp13 = 2 * _tmp2;

  // Output terms (3)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) = sqrt_info(0, 0) * (-x_d_y(0, 0) + std::atan2(_tmp4, _tmp6));

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 3>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp12 * (-_tmp11 * y(0, 0) + _tmp9 * (_tmp7 * y(1, 0) - _tmp8 * y(2, 0)));
    _res_D_x(0, 1) = _tmp12 * (-_tmp11 * y(1, 0) + _tmp9 * (_tmp13 * y(2, 0) - _tmp7 * y(0, 0)));
    _res_D_x(0, 2) = _tmp12 * (-_tmp11 * y(2, 0) + _tmp9 * (-_tmp13 * y(1, 0) + _tmp8 * y(0, 0)));
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 3>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = _tmp12 * (-_tmp11 * x(0, 0) + _tmp9 * (-_tmp7 * x(1, 0) + _tmp8 * x(2, 0)));
    _res_D_y(0, 1) = _tmp12 * (-_tmp11 * x(1, 0) + _tmp9 * (-_tmp13 * x(2, 0) + _tmp7 * x(0, 0)));
    _res_D_y(0, 2) = _tmp12 * (-_tmp11 * x(2, 0) + _tmp9 * (_tmp13 * x(1, 0) - _tmp8 * x(0, 0)));
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
