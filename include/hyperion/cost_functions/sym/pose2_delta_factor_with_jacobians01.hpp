// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose2.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose2_delta_factor
 *
 * Args:
 *     x: Pose2
 *     y: Pose2
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 *     res_D_x: (3x3) jacobian of res (3) wrt arg x (3)
 *     res_D_y: (3x3) jacobian of res (3) wrt arg y (3)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Pose2DeltaFactorWithJacobians01(
    const sym::Pose2<Scalar>& x, const sym::Pose2<Scalar>& y,
    const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_y = nullptr) {
  // Total ops: 58

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();

  // Intermediate terms (17)
  const Scalar _tmp0 = _x[0] * _y[1];
  const Scalar _tmp1 = _x[1] * _y[0];
  const Scalar _tmp2 = _tmp0 - _tmp1;
  const Scalar _tmp3 = _x[0] * _y[0];
  const Scalar _tmp4 = _x[1] * _y[1];
  const Scalar _tmp5 = _tmp3 + _tmp4;
  const Scalar _tmp6 = _tmp5 + epsilon * ((((_tmp5) > 0) - ((_tmp5) < 0)) + Scalar(0.5));
  const Scalar _tmp7 = std::atan2(_tmp2, _tmp6);
  const Scalar _tmp8 = -_x[3] + _y[3];
  const Scalar _tmp9 = -_x[2] + _y[2];
  const Scalar _tmp10 = Scalar(1.0) / (_tmp6);
  const Scalar _tmp11 = std::pow(_tmp2, Scalar(2));
  const Scalar _tmp12 = std::pow(_tmp6, Scalar(2));
  const Scalar _tmp13 = Scalar(1.0) / (_tmp12);
  const Scalar _tmp14 = _tmp12 / (_tmp11 + _tmp12);
  const Scalar _tmp15 = _tmp14 * (_tmp10 * (-_tmp3 - _tmp4) - _tmp11 * _tmp13);
  const Scalar _tmp16 = _tmp14 * (_tmp10 * _tmp5 - _tmp13 * _tmp2 * (-_tmp0 + _tmp1));

  // Output terms (3)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp7 * sqrt_info(0, 0) + _tmp8 * sqrt_info(0, 2) + _tmp9 * sqrt_info(0, 1);
  _res(1, 0) = _tmp7 * sqrt_info(1, 0) + _tmp8 * sqrt_info(1, 2) + _tmp9 * sqrt_info(1, 1);
  _res(2, 0) = _tmp7 * sqrt_info(2, 0) + _tmp8 * sqrt_info(2, 2) + _tmp9 * sqrt_info(2, 1);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp15 * sqrt_info(0, 0);
    _res_D_x(1, 0) = _tmp15 * sqrt_info(1, 0);
    _res_D_x(2, 0) = _tmp15 * sqrt_info(2, 0);
    _res_D_x(0, 1) = -sqrt_info(0, 1);
    _res_D_x(1, 1) = -sqrt_info(1, 1);
    _res_D_x(2, 1) = -sqrt_info(2, 1);
    _res_D_x(0, 2) = -sqrt_info(0, 2);
    _res_D_x(1, 2) = -sqrt_info(1, 2);
    _res_D_x(2, 2) = -sqrt_info(2, 2);
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = _tmp16 * sqrt_info(0, 0);
    _res_D_y(1, 0) = _tmp16 * sqrt_info(1, 0);
    _res_D_y(2, 0) = _tmp16 * sqrt_info(2, 0);
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
}  // namespace sym_hyperion
