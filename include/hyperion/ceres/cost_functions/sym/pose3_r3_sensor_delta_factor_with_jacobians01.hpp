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
 * Symbolic function: pose3_r3_sensor_delta_factor
 *
 * Args:
 *     x: Pose3
 *     x_T_y: Matrix31
 *     y: Pose3
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 *     res_D_x: (3x7) jacobian (result_dim x storage_dim) of res (3) wrt arg x (7) (row-major)
 *     res_D_x_T_y: (3x3) jacobian (result_dim x storage_dim) of res (3) wrt arg x_T_y (3)
 * (row-major)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Pose3R3SensorDeltaFactorWithJacobians01(
    const sym::Pose3<Scalar>& x, const Eigen::Matrix<Scalar, 3, 1>& x_T_y,
    const sym::Pose3<Scalar>& y, const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_x_T_y = nullptr) {
  // Total ops: 320

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (92)
  const Scalar _tmp0 = std::pow(_x[0], Scalar(2));
  const Scalar _tmp1 = 2 * _tmp0;
  const Scalar _tmp2 = -_tmp1;
  const Scalar _tmp3 = std::pow(_x[1], Scalar(2));
  const Scalar _tmp4 = 2 * _tmp3;
  const Scalar _tmp5 = 1 - _tmp4;
  const Scalar _tmp6 = _tmp2 + _tmp5;
  const Scalar _tmp7 = 2 * _x[2];
  const Scalar _tmp8 = _tmp7 * _x[0];
  const Scalar _tmp9 = 2 * _x[1];
  const Scalar _tmp10 = _tmp9 * _x[3];
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = _tmp11 * _x[4];
  const Scalar _tmp13 = 2 * _x[0];
  const Scalar _tmp14 = _tmp13 * _x[3];
  const Scalar _tmp15 = -_tmp14;
  const Scalar _tmp16 = _tmp7 * _x[1];
  const Scalar _tmp17 = _tmp15 + _tmp16;
  const Scalar _tmp18 = _tmp17 * _x[5];
  const Scalar _tmp19 = _tmp11 * _y[4] + _tmp17 * _y[5];
  const Scalar _tmp20 = -_tmp12 - _tmp18 + _tmp19 - _tmp6 * _x[6] + _tmp6 * _y[6] - x_T_y(2, 0);
  const Scalar _tmp21 = std::pow(_x[2], Scalar(2));
  const Scalar _tmp22 = 2 * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp23 + _tmp5;
  const Scalar _tmp25 = _tmp9 * _x[0];
  const Scalar _tmp26 = _tmp7 * _x[3];
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp27 * _x[5];
  const Scalar _tmp29 = -_tmp10;
  const Scalar _tmp30 = _tmp29 + _tmp8;
  const Scalar _tmp31 = _tmp30 * _x[6];
  const Scalar _tmp32 = _tmp27 * _y[5] + _tmp30 * _y[6];
  const Scalar _tmp33 = -_tmp24 * _x[4] + _tmp24 * _y[4] - _tmp28 - _tmp31 + _tmp32 - x_T_y(0, 0);
  const Scalar _tmp34 = _tmp2 + _tmp23 + 1;
  const Scalar _tmp35 = -_tmp26;
  const Scalar _tmp36 = _tmp25 + _tmp35;
  const Scalar _tmp37 = _tmp36 * _x[4];
  const Scalar _tmp38 = _tmp14 + _tmp16;
  const Scalar _tmp39 = _tmp38 * _x[6];
  const Scalar _tmp40 = _tmp36 * _y[4] + _tmp38 * _y[6];
  const Scalar _tmp41 = -_tmp34 * _x[5] + _tmp34 * _y[5] - _tmp37 - _tmp39 + _tmp40 - x_T_y(1, 0);
  const Scalar _tmp42 = -_tmp8;
  const Scalar _tmp43 = _tmp29 + _tmp42;
  const Scalar _tmp44 = std::pow(_x[3], Scalar(2));
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 = _tmp3 + _tmp45;
  const Scalar _tmp47 = -_tmp21;
  const Scalar _tmp48 = _tmp0 + _tmp47;
  const Scalar _tmp49 = _tmp46 + _tmp48;
  const Scalar _tmp50 = -_tmp16;
  const Scalar _tmp51 = _tmp14 + _tmp50;
  const Scalar _tmp52 = -_tmp43 * _x[4] + _tmp43 * _y[4] - _tmp49 * _x[6] + _tmp49 * _y[6] -
                        _tmp51 * _x[5] + _tmp51 * _y[5];
  const Scalar _tmp53 = -_tmp3;
  const Scalar _tmp54 = _tmp44 + _tmp53;
  const Scalar _tmp55 = _tmp48 + _tmp54;
  const Scalar _tmp56 = -_tmp28 - _tmp31 + _tmp32 - _tmp55 * _x[4] + _tmp55 * _y[4];
  const Scalar _tmp57 = _tmp52 * sqrt_info(0, 0) + _tmp56 * sqrt_info(0, 2);
  const Scalar _tmp58 = -_tmp25;
  const Scalar _tmp59 = _tmp26 + _tmp58;
  const Scalar _tmp60 = _tmp0 + _tmp21 + _tmp45 + _tmp53;
  const Scalar _tmp61 = _tmp15 + _tmp50;
  const Scalar _tmp62 = -_tmp59 * _x[4] + _tmp59 * _y[4] - _tmp60 * _x[5] + _tmp60 * _y[5] -
                        _tmp61 * _x[6] + _tmp61 * _y[6];
  const Scalar _tmp63 = -_tmp0;
  const Scalar _tmp64 = _tmp21 + _tmp63;
  const Scalar _tmp65 = _tmp54 + _tmp64;
  const Scalar _tmp66 = -_tmp12 - _tmp18 + _tmp19 - _tmp65 * _x[6] + _tmp65 * _y[6];
  const Scalar _tmp67 = _tmp62 * sqrt_info(0, 2) + _tmp66 * sqrt_info(0, 1);
  const Scalar _tmp68 = 2 * _tmp67;
  const Scalar _tmp69 = _tmp3 + _tmp44 + _tmp47 + _tmp63;
  const Scalar _tmp70 = -_tmp37 - _tmp39 + _tmp40 - _tmp69 * _x[5] + _tmp69 * _y[5];
  const Scalar _tmp71 = _tmp35 + _tmp58;
  const Scalar _tmp72 = _tmp10 + _tmp42;
  const Scalar _tmp73 = _tmp46 + _tmp64;
  const Scalar _tmp74 = -_tmp71 * _x[5] + _tmp71 * _y[5] - _tmp72 * _x[6] + _tmp72 * _y[6] -
                        _tmp73 * _x[4] + _tmp73 * _y[4];
  const Scalar _tmp75 = _tmp70 * sqrt_info(0, 0) + _tmp74 * sqrt_info(0, 1);
  const Scalar _tmp76 = _tmp52 * sqrt_info(1, 0) + _tmp56 * sqrt_info(1, 2);
  const Scalar _tmp77 = _tmp62 * sqrt_info(1, 2) + _tmp66 * sqrt_info(1, 1);
  const Scalar _tmp78 = 2 * _tmp77;
  const Scalar _tmp79 = _tmp70 * sqrt_info(1, 0) + _tmp74 * sqrt_info(1, 1);
  const Scalar _tmp80 = 2 * _tmp79;
  const Scalar _tmp81 = _tmp52 * sqrt_info(2, 0) + _tmp56 * sqrt_info(2, 2);
  const Scalar _tmp82 = _tmp62 * sqrt_info(2, 2) + _tmp66 * sqrt_info(2, 1);
  const Scalar _tmp83 = 2 * _tmp82;
  const Scalar _tmp84 = 2 * _tmp70 * sqrt_info(2, 0) + 2 * _tmp74 * sqrt_info(2, 1);
  const Scalar _tmp85 = 2 * _tmp57;
  const Scalar _tmp86 = 2 * _tmp76;
  const Scalar _tmp87 = 2 * _tmp81;
  const Scalar _tmp88 = _tmp22 - 1;
  const Scalar _tmp89 = _tmp4 + _tmp88;
  const Scalar _tmp90 = _tmp1 + _tmp88;
  const Scalar _tmp91 = _tmp1 + _tmp4 - 1;

  // Output terms (3)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp20 * sqrt_info(0, 2) + _tmp33 * sqrt_info(0, 0) + _tmp41 * sqrt_info(0, 1);
  _res(1, 0) = _tmp20 * sqrt_info(1, 2) + _tmp33 * sqrt_info(1, 0) + _tmp41 * sqrt_info(1, 1);
  _res(2, 0) = _tmp20 * sqrt_info(2, 2) + _tmp33 * sqrt_info(2, 0) + _tmp41 * sqrt_info(2, 1);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 7, Eigen::RowMajor>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = -_tmp57 * _tmp7 + _tmp68 * _x[3] + _tmp75 * _tmp9;
    _res_D_x(1, 0) = -_tmp7 * _tmp76 + _tmp78 * _x[3] + _tmp80 * _x[1];
    _res_D_x(2, 0) = -_tmp7 * _tmp81 + _tmp83 * _x[3] + _tmp84 * _x[1];
    _res_D_x(0, 1) = -_tmp13 * _tmp75 + _tmp67 * _tmp7 + _tmp85 * _x[3];
    _res_D_x(1, 1) = _tmp7 * _tmp77 - _tmp80 * _x[0] + _tmp86 * _x[3];
    _res_D_x(2, 1) = _tmp7 * _tmp82 - _tmp84 * _x[0] + _tmp87 * _x[3];
    _res_D_x(0, 2) = -_tmp67 * _tmp9 + 2 * _tmp75 * _x[3] + _tmp85 * _x[0];
    _res_D_x(1, 2) = -_tmp77 * _tmp9 + _tmp80 * _x[3] + _tmp86 * _x[0];
    _res_D_x(2, 2) = -_tmp82 * _tmp9 + _tmp84 * _x[3] + _tmp87 * _x[0];
    _res_D_x(0, 3) = -_tmp57 * _tmp9 - _tmp68 * _x[0] - _tmp7 * _tmp75;
    _res_D_x(1, 3) = -_tmp7 * _tmp79 - _tmp76 * _tmp9 - _tmp78 * _x[0];
    _res_D_x(2, 3) = -_tmp81 * _tmp9 - _tmp83 * _x[0] - _tmp84 * _x[2];
    _res_D_x(0, 4) = _tmp43 * sqrt_info(0, 2) + _tmp59 * sqrt_info(0, 1) + _tmp89 * sqrt_info(0, 0);
    _res_D_x(1, 4) = _tmp43 * sqrt_info(1, 2) + _tmp59 * sqrt_info(1, 1) + _tmp89 * sqrt_info(1, 0);
    _res_D_x(2, 4) = _tmp43 * sqrt_info(2, 2) + _tmp59 * sqrt_info(2, 1) + _tmp89 * sqrt_info(2, 0);
    _res_D_x(0, 5) = _tmp51 * sqrt_info(0, 2) + _tmp71 * sqrt_info(0, 0) + _tmp90 * sqrt_info(0, 1);
    _res_D_x(1, 5) = _tmp51 * sqrt_info(1, 2) + _tmp71 * sqrt_info(1, 0) + _tmp90 * sqrt_info(1, 1);
    _res_D_x(2, 5) = _tmp51 * sqrt_info(2, 2) + _tmp71 * sqrt_info(2, 0) + _tmp90 * sqrt_info(2, 1);
    _res_D_x(0, 6) = _tmp61 * sqrt_info(0, 1) + _tmp72 * sqrt_info(0, 0) + _tmp91 * sqrt_info(0, 2);
    _res_D_x(1, 6) = _tmp61 * sqrt_info(1, 1) + _tmp72 * sqrt_info(1, 0) + _tmp91 * sqrt_info(1, 2);
    _res_D_x(2, 6) = _tmp61 * sqrt_info(2, 1) + _tmp72 * sqrt_info(2, 0) + _tmp91 * sqrt_info(2, 2);
  }

  if (res_D_x_T_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 3, Eigen::RowMajor>> _res_D_x_T_y{res_D_x_T_y};

    _res_D_x_T_y(0, 0) = -sqrt_info(0, 0);
    _res_D_x_T_y(1, 0) = -sqrt_info(1, 0);
    _res_D_x_T_y(2, 0) = -sqrt_info(2, 0);
    _res_D_x_T_y(0, 1) = -sqrt_info(0, 1);
    _res_D_x_T_y(1, 1) = -sqrt_info(1, 1);
    _res_D_x_T_y(2, 1) = -sqrt_info(2, 1);
    _res_D_x_T_y(0, 2) = -sqrt_info(0, 2);
    _res_D_x_T_y(1, 2) = -sqrt_info(1, 2);
    _res_D_x_T_y(2, 2) = -sqrt_info(2, 2);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
