// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose3.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose3_sensor_euclidean_distance_factor
 *
 * Args:
 *     x: Pose3
 *     x_T_s: Pose3
 *     s_d_y: Matrix11
 *     y: Pose3
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 *     res_D_x: (1x7) jacobian (result_dim x storage_dim) of res (1) wrt arg x (7) (row-major)
 *     res_D_x_T_s: (1x7) jacobian (result_dim x storage_dim) of res (1) wrt arg x_T_s (7)
 * (row-major) res_D_y: (1x7) jacobian (result_dim x storage_dim) of res (1) wrt arg y (7)
 * (row-major)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Pose3SensorEuclideanDistanceFactorWithJacobians013(
    const sym::Pose3<Scalar>& x, const sym::Pose3<Scalar>& x_T_s,
    const Eigen::Matrix<Scalar, 1, 1>& s_d_y, const sym::Pose3<Scalar>& y,
    const Eigen::Matrix<Scalar, 1, 1>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_x_T_s = nullptr,
    Scalar* const res_D_y = nullptr) {
  // Total ops: 198

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x_T_s = x_T_s.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (60)
  const Scalar _tmp0 = 2 * _x[0];
  const Scalar _tmp1 = _tmp0 * _x[1];
  const Scalar _tmp2 = 2 * _x[3];
  const Scalar _tmp3 = _tmp2 * _x[2];
  const Scalar _tmp4 = -_tmp3;
  const Scalar _tmp5 = _tmp1 + _tmp4;
  const Scalar _tmp6 = _tmp0 * _x[2];
  const Scalar _tmp7 = _tmp2 * _x[1];
  const Scalar _tmp8 = _tmp6 + _tmp7;
  const Scalar _tmp9 = std::pow(_x[2], Scalar(2));
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = std::pow(_x[1], Scalar(2));
  const Scalar _tmp13 = 2 * _tmp12;
  const Scalar _tmp14 = 1 - _tmp13;
  const Scalar _tmp15 =
      -_tmp5 * _x_T_s[5] - _tmp8 * _x_T_s[6] - _x[4] - _x_T_s[4] * (_tmp11 + _tmp14) + _y[4];
  const Scalar _tmp16 = _tmp1 + _tmp3;
  const Scalar _tmp17 = _tmp0 * _x[3];
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = 2 * _x[1] * _x[2];
  const Scalar _tmp20 = _tmp18 + _tmp19;
  const Scalar _tmp21 = std::pow(_x[0], Scalar(2));
  const Scalar _tmp22 = 2 * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 =
      -_tmp16 * _x_T_s[4] - _tmp20 * _x_T_s[6] - _x[5] - _x_T_s[5] * (_tmp11 + _tmp23 + 1) + _y[5];
  const Scalar _tmp25 = -_tmp7;
  const Scalar _tmp26 = _tmp25 + _tmp6;
  const Scalar _tmp27 = _tmp17 + _tmp19;
  const Scalar _tmp28 =
      -_tmp26 * _x_T_s[4] - _tmp27 * _x_T_s[5] - _x[6] - _x_T_s[6] * (_tmp14 + _tmp23) + _y[6];
  const Scalar _tmp29 = std::sqrt(Scalar(std::pow(_tmp15, Scalar(2)) + std::pow(_tmp24, Scalar(2)) +
                                         std::pow(_tmp28, Scalar(2)) + epsilon));
  const Scalar _tmp30 = -_tmp1;
  const Scalar _tmp31 = _tmp30 + _tmp4;
  const Scalar _tmp32 = std::pow(_x[3], Scalar(2));
  const Scalar _tmp33 = -_tmp21;
  const Scalar _tmp34 = -_tmp9;
  const Scalar _tmp35 = 2 * _tmp24;
  const Scalar _tmp36 = -_tmp32;
  const Scalar _tmp37 = _tmp12 + _tmp36;
  const Scalar _tmp38 = _tmp33 + _tmp9;
  const Scalar _tmp39 = 2 * _tmp15;
  const Scalar _tmp40 = -_tmp6;
  const Scalar _tmp41 = _tmp40 + _tmp7;
  const Scalar _tmp42 = 2 * _tmp28;
  const Scalar _tmp43 = sqrt_info(0, 0) / _tmp29;
  const Scalar _tmp44 =
      _tmp43 * (_tmp35 * (-_tmp31 * _x_T_s[5] - _x_T_s[4] * (_tmp12 + _tmp32 + _tmp33 + _tmp34)) +
                _tmp39 * (-_tmp5 * _x_T_s[4] - _x_T_s[5] * (_tmp37 + _tmp38)) +
                _tmp42 * (-_tmp27 * _x_T_s[4] - _tmp41 * _x_T_s[5]));
  const Scalar _tmp45 = -_tmp12;
  const Scalar _tmp46 = _tmp32 + _tmp45;
  const Scalar _tmp47 = -_tmp19;
  const Scalar _tmp48 = _tmp18 + _tmp47;
  const Scalar _tmp49 = _tmp3 + _tmp30;
  const Scalar _tmp50 =
      _tmp43 * (_tmp35 * (-_tmp20 * _x_T_s[5] - _x_T_s[6] * (_tmp21 + _tmp36 + _tmp45 + _tmp9)) +
                _tmp39 * (-_tmp49 * _x_T_s[6] - _tmp8 * _x_T_s[5]) +
                _tmp42 * (-_tmp48 * _x_T_s[6] - _x_T_s[5] * (_tmp38 + _tmp46)));
  const Scalar _tmp51 = _tmp17 + _tmp47;
  const Scalar _tmp52 = _tmp21 + _tmp34;
  const Scalar _tmp53 = _tmp25 + _tmp40;
  const Scalar _tmp54 = _tmp43 * (_tmp35 * (-_tmp16 * _x_T_s[6] - _tmp51 * _x_T_s[4]) +
                                  _tmp39 * (-_tmp53 * _x_T_s[4] - _x_T_s[6] * (_tmp46 + _tmp52)) +
                                  _tmp42 * (-_tmp26 * _x_T_s[6] - _x_T_s[4] * (_tmp37 + _tmp52)));
  const Scalar _tmp55 = _tmp15 * _tmp43;
  const Scalar _tmp56 = _tmp24 * _tmp43;
  const Scalar _tmp57 = _tmp28 * _tmp43;
  const Scalar _tmp58 = (Scalar(1) / Scalar(2)) * _tmp43;
  const Scalar _tmp59 = _tmp22 - 1;

  // Output terms (4)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) = sqrt_info(0, 0) * (_tmp29 - s_d_y(0, 0));

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 7>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp44 * _x[1] + _tmp50 * _x[3] - _tmp54 * _x[2];
    _res_D_x(0, 1) = -_tmp44 * _x[0] + _tmp50 * _x[2] + _tmp54 * _x[3];
    _res_D_x(0, 2) = _tmp44 * _x[3] - _tmp50 * _x[1] + _tmp54 * _x[0];
    _res_D_x(0, 3) = -_tmp44 * _x[2] - _tmp50 * _x[0] - _tmp54 * _x[1];
    _res_D_x(0, 4) = -_tmp55;
    _res_D_x(0, 5) = -_tmp56;
    _res_D_x(0, 6) = -_tmp57;
  }

  if (res_D_x_T_s != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 7>> _res_D_x_T_s{res_D_x_T_s};

    _res_D_x_T_s.setZero();

    _res_D_x_T_s(0, 4) =
        _tmp58 * (_tmp31 * _tmp35 + _tmp39 * (_tmp10 + _tmp13 - 1) + _tmp41 * _tmp42);
    _res_D_x_T_s(0, 5) = _tmp58 * (_tmp35 * (_tmp10 + _tmp59) + _tmp39 * _tmp49 + _tmp42 * _tmp48);
    _res_D_x_T_s(0, 6) = _tmp58 * (_tmp35 * _tmp51 + _tmp39 * _tmp53 + _tmp42 * (_tmp13 + _tmp59));
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 7>> _res_D_y{res_D_y};

    _res_D_y.setZero();

    _res_D_y(0, 4) = _tmp55;
    _res_D_y(0, 5) = _tmp56;
    _res_D_y(0, 6) = _tmp57;
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
