// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose2.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose2_r2_sensor_relative_between_factor
 *
 * Args:
 *     x: Pose2
 *     x_T_a: Pose2
 *     a_T_b: Matrix21
 *     y: Pose2
 *     y_T_b: Pose2
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 *     res_D_x: (2x4) jacobian (result_dim x storage_dim) of res (2) wrt arg x (4) (row-major)
 *     res_D_x_T_a: (2x4) jacobian (result_dim x storage_dim) of res (2) wrt arg x_T_a (4)
 * (row-major) res_D_y: (2x4) jacobian (result_dim x storage_dim) of res (2) wrt arg y (4)
 * (row-major) res_D_y_T_b: (2x4) jacobian (result_dim x storage_dim) of res (2) wrt arg y_T_b (4)
 * (row-major)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Pose2R2SensorRelativeBetweenFactorWithJacobians0134(
    const sym::Pose2<Scalar>& x, const sym::Pose2<Scalar>& x_T_a,
    const Eigen::Matrix<Scalar, 2, 1>& a_T_b, const sym::Pose2<Scalar>& y,
    const sym::Pose2<Scalar>& y_T_b, const Eigen::Matrix<Scalar, 2, 2>& sqrt_info,
    const Scalar epsilon, Scalar* const res_D_x = nullptr, Scalar* const res_D_x_T_a = nullptr,
    Scalar* const res_D_y = nullptr, Scalar* const res_D_y_T_b = nullptr) {
  // Total ops: 174

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_a = x_T_a.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y_T_b = y_T_b.Data();

  // Intermediate terms (48)
  const Scalar _tmp0 = _x[1] * _x_T_a[1];
  const Scalar _tmp1 = _x[0] * _x_T_a[0];
  const Scalar _tmp2 = -_tmp0 + _tmp1;
  const Scalar _tmp3 = _x[0] * _x_T_a[2] - _x[1] * _x_T_a[3];
  const Scalar _tmp4 = _tmp3 + _x[2];
  const Scalar _tmp5 = _tmp2 * _tmp4;
  const Scalar _tmp6 = _x[1] * _x_T_a[0];
  const Scalar _tmp7 = _x[0] * _x_T_a[1];
  const Scalar _tmp8 = _tmp6 + _tmp7;
  const Scalar _tmp9 = _x[1] * _x_T_a[2];
  const Scalar _tmp10 = _x[0] * _x_T_a[3];
  const Scalar _tmp11 = _tmp10 + _tmp9 + _x[3];
  const Scalar _tmp12 = _y[0] * _y_T_b[2] - _y[1] * _y_T_b[3];
  const Scalar _tmp13 = _tmp12 + _y[2];
  const Scalar _tmp14 = _tmp13 * _tmp2;
  const Scalar _tmp15 = _y[0] * _y_T_b[3];
  const Scalar _tmp16 = _y[1] * _y_T_b[2];
  const Scalar _tmp17 = _tmp15 + _tmp16 + _y[3];
  const Scalar _tmp18 = -_tmp11 * _tmp8 + _tmp14 + _tmp17 * _tmp8 - _tmp5 - a_T_b(0, 0);
  const Scalar _tmp19 = _tmp11 * _tmp2;
  const Scalar _tmp20 = _tmp17 * _tmp2;
  const Scalar _tmp21 = -_tmp13 * _tmp8 - _tmp19 + _tmp20 + _tmp4 * _tmp8 - a_T_b(1, 0);
  const Scalar _tmp22 = -_tmp10 - _tmp9;
  const Scalar _tmp23 = -_tmp6 - _tmp7;
  const Scalar _tmp24 = _tmp13 * _tmp23 - _tmp19 + _tmp20 - _tmp23 * _tmp4;
  const Scalar _tmp25 = -_tmp2 * _tmp22 + _tmp24 - _tmp3 * _tmp8;
  const Scalar _tmp26 = -_tmp11 * _tmp23 - _tmp14 + _tmp17 * _tmp23 + _tmp5;
  const Scalar _tmp27 = -_tmp2 * _tmp3 + _tmp22 * _tmp8 + _tmp26;
  const Scalar _tmp28 = _tmp25 * sqrt_info(0, 0) + _tmp27 * sqrt_info(0, 1);
  const Scalar _tmp29 = _tmp25 * sqrt_info(1, 0) + _tmp27 * sqrt_info(1, 1);
  const Scalar _tmp30 = _tmp0 - _tmp1;
  const Scalar _tmp31 = _tmp24 * sqrt_info(0, 0) + _tmp26 * sqrt_info(0, 1);
  const Scalar _tmp32 = _tmp24 * sqrt_info(1, 0) + _tmp26 * sqrt_info(1, 1);
  const Scalar _tmp33 = -_tmp2 * _x[0] - _tmp8 * _x[1];
  const Scalar _tmp34 = _tmp8 * _x[0];
  const Scalar _tmp35 = _tmp2 * _x[1];
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = -_tmp34 + _tmp35;
  const Scalar _tmp38 = -_tmp15 - _tmp16;
  const Scalar _tmp39 = _tmp12 * _tmp2 - _tmp38 * _tmp8;
  const Scalar _tmp40 = _tmp12 * _tmp8 + _tmp2 * _tmp38;
  const Scalar _tmp41 = _tmp39 * sqrt_info(0, 1) + _tmp40 * sqrt_info(0, 0);
  const Scalar _tmp42 = _tmp39 * sqrt_info(1, 1) + _tmp40 * sqrt_info(1, 0);
  const Scalar _tmp43 = _tmp8 * _y[0];
  const Scalar _tmp44 = _tmp2 * _y[1];
  const Scalar _tmp45 = -_tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp2 * _y[0] + _tmp8 * _y[1];
  const Scalar _tmp47 = _tmp43 - _tmp44;

  // Output terms (5)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp18 * sqrt_info(0, 0) + _tmp21 * sqrt_info(0, 1);
  _res(1, 0) = _tmp18 * sqrt_info(1, 0) + _tmp21 * sqrt_info(1, 1);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 4, Eigen::RowMajor>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = -_tmp28 * _x[1];
    _res_D_x(1, 0) = -_tmp29 * _x[1];
    _res_D_x(0, 1) = _tmp28 * _x[0];
    _res_D_x(1, 1) = _tmp29 * _x[0];
    _res_D_x(0, 2) = _tmp30 * sqrt_info(0, 0) + _tmp8 * sqrt_info(0, 1);
    _res_D_x(1, 2) = _tmp30 * sqrt_info(1, 0) + _tmp8 * sqrt_info(1, 1);
    _res_D_x(0, 3) = _tmp23 * sqrt_info(0, 0) + _tmp30 * sqrt_info(0, 1);
    _res_D_x(1, 3) = _tmp23 * sqrt_info(1, 0) + _tmp30 * sqrt_info(1, 1);
  }

  if (res_D_x_T_a != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 4, Eigen::RowMajor>> _res_D_x_T_a{res_D_x_T_a};

    _res_D_x_T_a(0, 0) = -_tmp31 * _x_T_a[1];
    _res_D_x_T_a(1, 0) = -_tmp32 * _x_T_a[1];
    _res_D_x_T_a(0, 1) = _tmp31 * _x_T_a[0];
    _res_D_x_T_a(1, 1) = _tmp32 * _x_T_a[0];
    _res_D_x_T_a(0, 2) = _tmp33 * sqrt_info(0, 0) + _tmp36 * sqrt_info(0, 1);
    _res_D_x_T_a(1, 2) = _tmp33 * sqrt_info(1, 0) + _tmp36 * sqrt_info(1, 1);
    _res_D_x_T_a(0, 3) = _tmp33 * sqrt_info(0, 1) + _tmp37 * sqrt_info(0, 0);
    _res_D_x_T_a(1, 3) = _tmp33 * sqrt_info(1, 1) + _tmp37 * sqrt_info(1, 0);
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 4, Eigen::RowMajor>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = -_tmp41 * _y[1];
    _res_D_y(1, 0) = -_tmp42 * _y[1];
    _res_D_y(0, 1) = _tmp41 * _y[0];
    _res_D_y(1, 1) = _tmp42 * _y[0];
    _res_D_y(0, 2) = _tmp2 * sqrt_info(0, 0) + _tmp23 * sqrt_info(0, 1);
    _res_D_y(1, 2) = _tmp2 * sqrt_info(1, 0) + _tmp23 * sqrt_info(1, 1);
    _res_D_y(0, 3) = _tmp2 * sqrt_info(0, 1) + _tmp8 * sqrt_info(0, 0);
    _res_D_y(1, 3) = _tmp2 * sqrt_info(1, 1) + _tmp8 * sqrt_info(1, 0);
  }

  if (res_D_y_T_b != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 4, Eigen::RowMajor>> _res_D_y_T_b{res_D_y_T_b};

    _res_D_y_T_b(0, 0) = 0;
    _res_D_y_T_b(1, 0) = 0;
    _res_D_y_T_b(0, 1) = 0;
    _res_D_y_T_b(1, 1) = 0;
    _res_D_y_T_b(0, 2) = _tmp45 * sqrt_info(0, 1) + _tmp46 * sqrt_info(0, 0);
    _res_D_y_T_b(1, 2) = _tmp45 * sqrt_info(1, 1) + _tmp46 * sqrt_info(1, 0);
    _res_D_y_T_b(0, 3) = _tmp46 * sqrt_info(0, 1) + _tmp47 * sqrt_info(0, 0);
    _res_D_y_T_b(1, 3) = _tmp46 * sqrt_info(1, 1) + _tmp47 * sqrt_info(1, 0);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
