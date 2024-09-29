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
 * Symbolic function: pose2_r2_sensor_delta_factor
 *
 * Args:
 *     x: Pose2
 *     x_T_y: Matrix21
 *     y: Pose2
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 *     res_D_x: (2x4) jacobian (result_dim x storage_dim) of res (2) wrt arg x (4) (row-major)
 *     res_D_x_T_y: (2x2) jacobian (result_dim x storage_dim) of res (2) wrt arg x_T_y (2)
 * (row-major)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Pose2R2SensorDeltaFactorWithJacobians01(
    const sym::Pose2<Scalar>& x, const Eigen::Matrix<Scalar, 2, 1>& x_T_y,
    const sym::Pose2<Scalar>& y, const Eigen::Matrix<Scalar, 2, 2>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_x_T_y = nullptr) {
  // Total ops: 56

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();

  // Intermediate terms (12)
  const Scalar _tmp0 = _x[0] * _x[2] + _x[1] * _x[3];
  const Scalar _tmp1 = _x[0] * _y[2];
  const Scalar _tmp2 = _x[1] * _y[3];
  const Scalar _tmp3 = -_tmp0 + _tmp1 + _tmp2 - x_T_y(0, 0);
  const Scalar _tmp4 = _x[0] * _x[3];
  const Scalar _tmp5 = _x[1] * _x[2];
  const Scalar _tmp6 = _x[0] * _y[3] - _x[1] * _y[2];
  const Scalar _tmp7 = -_tmp4 + _tmp5 + _tmp6 - x_T_y(1, 0);
  const Scalar _tmp8 = _tmp0 - _tmp1 - _tmp2;
  const Scalar _tmp9 = -_tmp4 + _tmp5 + _tmp6;
  const Scalar _tmp10 = _tmp8 * sqrt_info(0, 1) + _tmp9 * sqrt_info(0, 0);
  const Scalar _tmp11 = _tmp8 * sqrt_info(1, 1) + _tmp9 * sqrt_info(1, 0);

  // Output terms (3)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp3 * sqrt_info(0, 0) + _tmp7 * sqrt_info(0, 1);
  _res(1, 0) = _tmp3 * sqrt_info(1, 0) + _tmp7 * sqrt_info(1, 1);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 4, Eigen::RowMajor>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = -_tmp10 * _x[1];
    _res_D_x(1, 0) = -_tmp11 * _x[1];
    _res_D_x(0, 1) = _tmp10 * _x[0];
    _res_D_x(1, 1) = _tmp11 * _x[0];
    _res_D_x(0, 2) = -_x[0] * sqrt_info(0, 0) + _x[1] * sqrt_info(0, 1);
    _res_D_x(1, 2) = -_x[0] * sqrt_info(1, 0) + _x[1] * sqrt_info(1, 1);
    _res_D_x(0, 3) = -_x[0] * sqrt_info(0, 1) - _x[1] * sqrt_info(0, 0);
    _res_D_x(1, 3) = -_x[0] * sqrt_info(1, 1) - _x[1] * sqrt_info(1, 0);
  }

  if (res_D_x_T_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 2, Eigen::RowMajor>> _res_D_x_T_y{res_D_x_T_y};

    _res_D_x_T_y(0, 0) = -sqrt_info(0, 0);
    _res_D_x_T_y(1, 0) = -sqrt_info(1, 0);
    _res_D_x_T_y(0, 1) = -sqrt_info(0, 1);
    _res_D_x_T_y(1, 1) = -sqrt_info(1, 1);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
