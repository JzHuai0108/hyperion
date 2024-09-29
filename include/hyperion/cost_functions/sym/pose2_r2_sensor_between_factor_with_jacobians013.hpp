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
 * Symbolic function: pose2_r2_sensor_between_factor
 *
 * Args:
 *     x: Pose2
 *     x_T_s: Pose2
 *     s_T_y: Matrix21
 *     y: Pose2
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 *     res_D_x: (2x3) jacobian of res (2) wrt arg x (3)
 *     res_D_x_T_s: (2x3) jacobian of res (2) wrt arg x_T_s (3)
 *     res_D_y: (2x3) jacobian of res (2) wrt arg y (3)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Pose2R2SensorBetweenFactorWithJacobians013(
    const sym::Pose2<Scalar>& x, const sym::Pose2<Scalar>& x_T_s,
    const Eigen::Matrix<Scalar, 2, 1>& s_T_y, const sym::Pose2<Scalar>& y,
    const Eigen::Matrix<Scalar, 2, 2>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_x_T_s = nullptr,
    Scalar* const res_D_y = nullptr) {
  // Total ops: 115

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_s = x_T_s.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();

  // Intermediate terms (29)
  const Scalar _tmp0 = _x[0] * _x_T_s[0];
  const Scalar _tmp1 = _x[1] * _x_T_s[1];
  const Scalar _tmp2 = _tmp0 - _tmp1;
  const Scalar _tmp3 = _x[0] * _x_T_s[3];
  const Scalar _tmp4 = _x[1] * _x_T_s[2];
  const Scalar _tmp5 = _tmp3 + _tmp4 + _x[3];
  const Scalar _tmp6 = _tmp2 * _tmp5;
  const Scalar _tmp7 = _x[0] * _x_T_s[1];
  const Scalar _tmp8 = _x[1] * _x_T_s[0];
  const Scalar _tmp9 = _tmp7 + _tmp8;
  const Scalar _tmp10 = _x[0] * _x_T_s[2] - _x[1] * _x_T_s[3];
  const Scalar _tmp11 = _tmp10 + _x[2];
  const Scalar _tmp12 = _tmp2 * _y[3];
  const Scalar _tmp13 = _tmp11 * _tmp9 + _tmp12 - _tmp6 - _tmp9 * _y[2] - s_T_y(1, 0);
  const Scalar _tmp14 = _tmp11 * _tmp2;
  const Scalar _tmp15 = _tmp2 * _y[2];
  const Scalar _tmp16 = -_tmp14 + _tmp15 - _tmp5 * _tmp9 + _tmp9 * _y[3] - s_T_y(0, 0);
  const Scalar _tmp17 = -_tmp3 - _tmp4;
  const Scalar _tmp18 = -_tmp7 - _tmp8;
  const Scalar _tmp19 = -_tmp11 * _tmp18 + _tmp12 + _tmp18 * _y[2] - _tmp6;
  const Scalar _tmp20 = -_tmp10 * _tmp9 - _tmp17 * _tmp2 + _tmp19;
  const Scalar _tmp21 = _tmp14 - _tmp15 - _tmp18 * _tmp5 + _tmp18 * _y[3];
  const Scalar _tmp22 = -_tmp10 * _tmp2 + _tmp17 * _tmp9 + _tmp21;
  const Scalar _tmp23 = -_tmp0 + _tmp1;
  const Scalar _tmp24 = -_tmp2 * _x[0] - _tmp9 * _x[1];
  const Scalar _tmp25 = _tmp2 * _x[1];
  const Scalar _tmp26 = _tmp9 * _x[0];
  const Scalar _tmp27 = -_tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp25 - _tmp26;

  // Output terms (4)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp13 * sqrt_info(0, 1) + _tmp16 * sqrt_info(0, 0);
  _res(1, 0) = _tmp13 * sqrt_info(1, 1) + _tmp16 * sqrt_info(1, 0);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp20 * sqrt_info(0, 0) + _tmp22 * sqrt_info(0, 1);
    _res_D_x(1, 0) = _tmp20 * sqrt_info(1, 0) + _tmp22 * sqrt_info(1, 1);
    _res_D_x(0, 1) = _tmp23 * sqrt_info(0, 0) + _tmp9 * sqrt_info(0, 1);
    _res_D_x(1, 1) = _tmp23 * sqrt_info(1, 0) + _tmp9 * sqrt_info(1, 1);
    _res_D_x(0, 2) = _tmp18 * sqrt_info(0, 0) + _tmp23 * sqrt_info(0, 1);
    _res_D_x(1, 2) = _tmp18 * sqrt_info(1, 0) + _tmp23 * sqrt_info(1, 1);
  }

  if (res_D_x_T_s != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x_T_s{res_D_x_T_s};

    _res_D_x_T_s(0, 0) = _tmp19 * sqrt_info(0, 0) + _tmp21 * sqrt_info(0, 1);
    _res_D_x_T_s(1, 0) = _tmp19 * sqrt_info(1, 0) + _tmp21 * sqrt_info(1, 1);
    _res_D_x_T_s(0, 1) = _tmp24 * sqrt_info(0, 0) + _tmp27 * sqrt_info(0, 1);
    _res_D_x_T_s(1, 1) = _tmp24 * sqrt_info(1, 0) + _tmp27 * sqrt_info(1, 1);
    _res_D_x_T_s(0, 2) = _tmp24 * sqrt_info(0, 1) + _tmp28 * sqrt_info(0, 0);
    _res_D_x_T_s(1, 2) = _tmp24 * sqrt_info(1, 1) + _tmp28 * sqrt_info(1, 0);
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = 0;
    _res_D_y(1, 0) = 0;
    _res_D_y(0, 1) = _tmp18 * sqrt_info(0, 1) + _tmp2 * sqrt_info(0, 0);
    _res_D_y(1, 1) = _tmp18 * sqrt_info(1, 1) + _tmp2 * sqrt_info(1, 0);
    _res_D_y(0, 2) = _tmp2 * sqrt_info(0, 1) + _tmp9 * sqrt_info(0, 0);
    _res_D_y(1, 2) = _tmp2 * sqrt_info(1, 1) + _tmp9 * sqrt_info(1, 0);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
