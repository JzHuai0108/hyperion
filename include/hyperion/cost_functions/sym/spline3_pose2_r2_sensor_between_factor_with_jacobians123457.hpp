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
 * Symbolic function: spline3_pose2_r2_sensor_between_factor
 *
 * Args:
 *     lambdas: Matrix31
 *     x0: Pose2
 *     x1: Pose2
 *     x2: Pose2
 *     x3: Pose2
 *     x_T_s: Pose2
 *     s_T_y: Matrix21
 *     y: Pose2
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 *     res_D_x0: (2x3) jacobian of res (2) wrt arg x0 (3)
 *     res_D_x1: (2x3) jacobian of res (2) wrt arg x1 (3)
 *     res_D_x2: (2x3) jacobian of res (2) wrt arg x2 (3)
 *     res_D_x3: (2x3) jacobian of res (2) wrt arg x3 (3)
 *     res_D_x_T_s: (2x3) jacobian of res (2) wrt arg x_T_s (3)
 *     res_D_y: (2x3) jacobian of res (2) wrt arg y (3)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Spline3Pose2R2SensorBetweenFactorWithJacobians123457(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const sym::Pose2<Scalar>& x_T_s, const Eigen::Matrix<Scalar, 2, 1>& s_T_y,
    const sym::Pose2<Scalar>& y, const Eigen::Matrix<Scalar, 2, 2>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x0 = nullptr, Scalar* const res_D_x1 = nullptr,
    Scalar* const res_D_x2 = nullptr, Scalar* const res_D_x3 = nullptr,
    Scalar* const res_D_x_T_s = nullptr, Scalar* const res_D_y = nullptr) {
  // Total ops: 536

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_s = x_T_s.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();

  // Intermediate terms (146)
  const Scalar _tmp0 = _x2[1] * _x3[0];
  const Scalar _tmp1 = _x2[0] * _x3[1];
  const Scalar _tmp2 = -_tmp0 + _tmp1;
  const Scalar _tmp3 = _x2[0] * _x3[0];
  const Scalar _tmp4 = _x2[1] * _x3[1];
  const Scalar _tmp5 = _tmp3 + _tmp4;
  const Scalar _tmp6 = _tmp5 + epsilon * ((((_tmp5) > 0) - ((_tmp5) < 0)) + Scalar(0.5));
  const Scalar _tmp7 = lambdas(2, 0) * std::atan2(_tmp2, _tmp6);
  const Scalar _tmp8 = std::sin(_tmp7);
  const Scalar _tmp9 = _x1[0] * _x2[1];
  const Scalar _tmp10 = _x1[1] * _x2[0];
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = _x1[0] * _x2[0];
  const Scalar _tmp13 = _x1[1] * _x2[1];
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = _tmp14 + epsilon * ((((_tmp14) > 0) - ((_tmp14) < 0)) + Scalar(0.5));
  const Scalar _tmp16 = lambdas(1, 0) * std::atan2(_tmp11, _tmp15);
  const Scalar _tmp17 = std::sin(_tmp16);
  const Scalar _tmp18 = _tmp17 * _tmp8;
  const Scalar _tmp19 = std::cos(_tmp7);
  const Scalar _tmp20 = std::cos(_tmp16);
  const Scalar _tmp21 = _tmp19 * _tmp20;
  const Scalar _tmp22 = -_tmp18 + _tmp21;
  const Scalar _tmp23 = _x0[1] * _x1[0];
  const Scalar _tmp24 = _x0[0] * _x1[1];
  const Scalar _tmp25 = -_tmp23 + _tmp24;
  const Scalar _tmp26 = _x0[1] * _x1[1];
  const Scalar _tmp27 = _x0[0] * _x1[0];
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp28 + epsilon * ((((_tmp28) > 0) - ((_tmp28) < 0)) + Scalar(0.5));
  const Scalar _tmp30 = lambdas(0, 0) * std::atan2(_tmp25, _tmp29);
  const Scalar _tmp31 = std::cos(_tmp30);
  const Scalar _tmp32 = _tmp22 * _tmp31;
  const Scalar _tmp33 = _tmp20 * _tmp8;
  const Scalar _tmp34 = _tmp17 * _tmp19;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = std::sin(_tmp30);
  const Scalar _tmp37 = _tmp35 * _tmp36;
  const Scalar _tmp38 = _tmp32 - _tmp37;
  const Scalar _tmp39 = _tmp38 * _x0[1];
  const Scalar _tmp40 = _tmp22 * _tmp36;
  const Scalar _tmp41 = _tmp31 * _tmp35;
  const Scalar _tmp42 = _tmp40 + _tmp41;
  const Scalar _tmp43 = _tmp42 * _x0[0];
  const Scalar _tmp44 = _tmp39 + _tmp43;
  const Scalar _tmp45 = _tmp44 * _x_T_s[0];
  const Scalar _tmp46 = _tmp38 * _x0[0] - _tmp42 * _x0[1];
  const Scalar _tmp47 = _tmp46 * _x_T_s[1];
  const Scalar _tmp48 = _tmp45 + _tmp47;
  const Scalar _tmp49 = -_tmp44 * _x_T_s[3] + _tmp46 * _x_T_s[2] + _x0[2] +
                        lambdas(0, 0) * (-_x0[2] + _x1[2]) + lambdas(1, 0) * (-_x1[2] + _x2[2]) +
                        lambdas(2, 0) * (-_x2[2] + _x3[2]);
  const Scalar _tmp50 = -_tmp44 * _x_T_s[1] + _tmp46 * _x_T_s[0];
  const Scalar _tmp51 = _tmp44 * _x_T_s[2] + _tmp46 * _x_T_s[3] + _x0[3] +
                        lambdas(0, 0) * (-_x0[3] + _x1[3]) + lambdas(1, 0) * (-_x1[3] + _x2[3]) +
                        lambdas(2, 0) * (-_x2[3] + _x3[3]);
  const Scalar _tmp52 = _tmp50 * _tmp51;
  const Scalar _tmp53 = _tmp50 * _y[3];
  const Scalar _tmp54 = _tmp48 * _tmp49 - _tmp48 * _y[2] - _tmp52 + _tmp53 - s_T_y(1, 0);
  const Scalar _tmp55 = _tmp49 * _tmp50;
  const Scalar _tmp56 = _tmp50 * _y[2];
  const Scalar _tmp57 = -_tmp48 * _tmp51 + _tmp48 * _y[3] - _tmp55 + _tmp56 - s_T_y(0, 0);
  const Scalar _tmp58 = std::pow(_tmp25, Scalar(2));
  const Scalar _tmp59 = std::pow(_tmp29, Scalar(2));
  const Scalar _tmp60 = Scalar(1.0) / (_tmp59);
  const Scalar _tmp61 = Scalar(1.0) / (_tmp29);
  const Scalar _tmp62 = _tmp59 * lambdas(0, 0) / (_tmp58 + _tmp59);
  const Scalar _tmp63 = _tmp62 * (-_tmp58 * _tmp60 + _tmp61 * (-_tmp26 - _tmp27));
  const Scalar _tmp64 = _tmp32 * _tmp63 - _tmp37 * _tmp63;
  const Scalar _tmp65 = -_tmp40 * _tmp63 - _tmp41 * _tmp63;
  const Scalar _tmp66 = -_tmp39 - _tmp43;
  const Scalar _tmp67 = -_tmp64 * _x0[1] + _tmp65 * _x0[0] + _tmp66;
  const Scalar _tmp68 = _tmp46 + _tmp64 * _x0[0] + _tmp65 * _x0[1];
  const Scalar _tmp69 = _tmp67 * _x_T_s[2] - _tmp68 * _x_T_s[3];
  const Scalar _tmp70 = _tmp67 * _x_T_s[1] + _tmp68 * _x_T_s[0];
  const Scalar _tmp71 = _tmp67 * _x_T_s[0] - _tmp68 * _x_T_s[1];
  const Scalar _tmp72 = _tmp67 * _x_T_s[3] + _tmp68 * _x_T_s[2];
  const Scalar _tmp73 = _tmp48 * _tmp69 + _tmp49 * _tmp70 - _tmp50 * _tmp72 - _tmp51 * _tmp71 -
                        _tmp70 * _y[2] + _tmp71 * _y[3];
  const Scalar _tmp74 = -_tmp48 * _tmp72 - _tmp49 * _tmp71 - _tmp50 * _tmp69 - _tmp51 * _tmp70 +
                        _tmp70 * _y[3] + _tmp71 * _y[2];
  const Scalar _tmp75 = 1 - lambdas(0, 0);
  const Scalar _tmp76 = _tmp50 * sqrt_info(0, 0);
  const Scalar _tmp77 = _tmp48 * sqrt_info(0, 1);
  const Scalar _tmp78 = _tmp50 * sqrt_info(1, 0);
  const Scalar _tmp79 = _tmp48 * sqrt_info(1, 1);
  const Scalar _tmp80 = _tmp50 * sqrt_info(0, 1);
  const Scalar _tmp81 = _tmp48 * sqrt_info(0, 0);
  const Scalar _tmp82 = _tmp50 * sqrt_info(1, 1);
  const Scalar _tmp83 = _tmp48 * sqrt_info(1, 0);
  const Scalar _tmp84 = std::pow(_tmp11, Scalar(2));
  const Scalar _tmp85 = std::pow(_tmp15, Scalar(2));
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = Scalar(1.0) / (_tmp15);
  const Scalar _tmp88 = _tmp85 * lambdas(1, 0) / (_tmp84 + _tmp85);
  const Scalar _tmp89 = _tmp88 * (-_tmp84 * _tmp86 + _tmp87 * (-_tmp12 - _tmp13));
  const Scalar _tmp90 = -_tmp18 * _tmp89 + _tmp21 * _tmp89;
  const Scalar _tmp91 = -_tmp33 * _tmp89 - _tmp34 * _tmp89;
  const Scalar _tmp92 = _tmp62 * (-_tmp25 * _tmp60 * (_tmp23 - _tmp24) + _tmp28 * _tmp61);
  const Scalar _tmp93 = _tmp31 * _tmp90 + _tmp32 * _tmp92 + _tmp36 * _tmp91 - _tmp37 * _tmp92;
  const Scalar _tmp94 = _tmp31 * _tmp91 - _tmp36 * _tmp90 - _tmp40 * _tmp92 - _tmp41 * _tmp92;
  const Scalar _tmp95 = -_tmp93 * _x0[1] + _tmp94 * _x0[0];
  const Scalar _tmp96 = _tmp93 * _x0[0] + _tmp94 * _x0[1];
  const Scalar _tmp97 = _tmp95 * _x_T_s[2] - _tmp96 * _x_T_s[3];
  const Scalar _tmp98 = _tmp95 * _x_T_s[3] + _tmp96 * _x_T_s[2];
  const Scalar _tmp99 = _tmp95 * _x_T_s[1] + _tmp96 * _x_T_s[0];
  const Scalar _tmp100 = _tmp95 * _x_T_s[0] - _tmp96 * _x_T_s[1];
  const Scalar _tmp101 = -_tmp100 * _tmp49 + _tmp100 * _y[2] - _tmp48 * _tmp98 - _tmp50 * _tmp97 -
                         _tmp51 * _tmp99 + _tmp99 * _y[3];
  const Scalar _tmp102 = -_tmp100 * _tmp51 + _tmp100 * _y[3] + _tmp48 * _tmp97 + _tmp49 * _tmp99 -
                         _tmp50 * _tmp98 - _tmp99 * _y[2];
  const Scalar _tmp103 = lambdas(0, 0) - lambdas(1, 0);
  const Scalar _tmp104 = std::pow(_tmp2, Scalar(2));
  const Scalar _tmp105 = std::pow(_tmp6, Scalar(2));
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = Scalar(1.0) / (_tmp6);
  const Scalar _tmp108 = _tmp105 * lambdas(2, 0) / (_tmp104 + _tmp105);
  const Scalar _tmp109 = _tmp108 * (-_tmp104 * _tmp106 + _tmp107 * (-_tmp3 - _tmp4));
  const Scalar _tmp110 = _tmp88 * (-_tmp11 * _tmp86 * (_tmp10 - _tmp9) + _tmp14 * _tmp87);
  const Scalar _tmp111 = -_tmp109 * _tmp33 - _tmp109 * _tmp34 - _tmp110 * _tmp33 - _tmp110 * _tmp34;
  const Scalar _tmp112 = -_tmp109 * _tmp18 + _tmp109 * _tmp21 - _tmp110 * _tmp18 + _tmp110 * _tmp21;
  const Scalar _tmp113 = _tmp111 * _tmp36 + _tmp112 * _tmp31;
  const Scalar _tmp114 = _tmp111 * _tmp31 - _tmp112 * _tmp36;
  const Scalar _tmp115 = _tmp113 * _x0[0] + _tmp114 * _x0[1];
  const Scalar _tmp116 = -_tmp113 * _x0[1] + _tmp114 * _x0[0];
  const Scalar _tmp117 = -_tmp115 * _x_T_s[3] + _tmp116 * _x_T_s[2];
  const Scalar _tmp118 = _tmp115 * _x_T_s[2] + _tmp116 * _x_T_s[3];
  const Scalar _tmp119 = _tmp115 * _x_T_s[0] + _tmp116 * _x_T_s[1];
  const Scalar _tmp120 = -_tmp115 * _x_T_s[1] + _tmp116 * _x_T_s[0];
  const Scalar _tmp121 = _tmp117 * _tmp48 - _tmp118 * _tmp50 + _tmp119 * _tmp49 - _tmp119 * _y[2] -
                         _tmp120 * _tmp51 + _tmp120 * _y[3];
  const Scalar _tmp122 = -_tmp117 * _tmp50 - _tmp118 * _tmp48 - _tmp119 * _tmp51 + _tmp119 * _y[3] -
                         _tmp120 * _tmp49 + _tmp120 * _y[2];
  const Scalar _tmp123 = lambdas(1, 0) - lambdas(2, 0);
  const Scalar _tmp124 = _tmp108 * (-_tmp106 * _tmp2 * (_tmp0 - _tmp1) + _tmp107 * _tmp5);
  const Scalar _tmp125 = -_tmp124 * _tmp18 + _tmp124 * _tmp21;
  const Scalar _tmp126 = -_tmp124 * _tmp33 - _tmp124 * _tmp34;
  const Scalar _tmp127 = -_tmp125 * _tmp36 + _tmp126 * _tmp31;
  const Scalar _tmp128 = _tmp125 * _tmp31 + _tmp126 * _tmp36;
  const Scalar _tmp129 = _tmp127 * _x0[1] + _tmp128 * _x0[0];
  const Scalar _tmp130 = _tmp127 * _x0[0] - _tmp128 * _x0[1];
  const Scalar _tmp131 = -_tmp129 * _x_T_s[3] + _tmp130 * _x_T_s[2];
  const Scalar _tmp132 = _tmp129 * _x_T_s[2] + _tmp130 * _x_T_s[3];
  const Scalar _tmp133 = -_tmp129 * _x_T_s[1] + _tmp130 * _x_T_s[0];
  const Scalar _tmp134 = _tmp129 * _x_T_s[0] + _tmp130 * _x_T_s[1];
  const Scalar _tmp135 = _tmp131 * _tmp48 - _tmp132 * _tmp50 - _tmp133 * _tmp51 + _tmp133 * _y[3] +
                         _tmp134 * _tmp49 - _tmp134 * _y[2];
  const Scalar _tmp136 = -_tmp131 * _tmp50 - _tmp132 * _tmp48 - _tmp133 * _tmp49 + _tmp133 * _y[2] -
                         _tmp134 * _tmp51 + _tmp134 * _y[3];
  const Scalar _tmp137 = -_tmp45 - _tmp47;
  const Scalar _tmp138 = -_tmp137 * _tmp49 + _tmp137 * _y[2] - _tmp52 + _tmp53;
  const Scalar _tmp139 = -_tmp137 * _tmp51 + _tmp137 * _y[3] + _tmp55 - _tmp56;
  const Scalar _tmp140 = _tmp46 * _tmp48;
  const Scalar _tmp141 = _tmp140 - _tmp44 * _tmp50;
  const Scalar _tmp142 = -_tmp46 * _tmp50;
  const Scalar _tmp143 = _tmp142 - _tmp44 * _tmp48;
  const Scalar _tmp144 = -_tmp140 - _tmp50 * _tmp66;
  const Scalar _tmp145 = _tmp142 + _tmp48 * _tmp66;

  // Output terms (7)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp54 * sqrt_info(0, 1) + _tmp57 * sqrt_info(0, 0);
  _res(1, 0) = _tmp54 * sqrt_info(1, 1) + _tmp57 * sqrt_info(1, 0);

  if (res_D_x0 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x0{res_D_x0};

    _res_D_x0(0, 0) = _tmp73 * sqrt_info(0, 1) + _tmp74 * sqrt_info(0, 0);
    _res_D_x0(1, 0) = _tmp73 * sqrt_info(1, 1) + _tmp74 * sqrt_info(1, 0);
    _res_D_x0(0, 1) = -_tmp75 * _tmp76 + _tmp75 * _tmp77;
    _res_D_x0(1, 1) = -_tmp75 * _tmp78 + _tmp75 * _tmp79;
    _res_D_x0(0, 2) = -_tmp75 * _tmp80 - _tmp75 * _tmp81;
    _res_D_x0(1, 2) = -_tmp75 * _tmp82 - _tmp75 * _tmp83;
  }

  if (res_D_x1 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x1{res_D_x1};

    _res_D_x1(0, 0) = _tmp101 * sqrt_info(0, 0) + _tmp102 * sqrt_info(0, 1);
    _res_D_x1(1, 0) = _tmp101 * sqrt_info(1, 0) + _tmp102 * sqrt_info(1, 1);
    _res_D_x1(0, 1) = -_tmp103 * _tmp76 + _tmp103 * _tmp77;
    _res_D_x1(1, 1) = -_tmp103 * _tmp78 + _tmp103 * _tmp79;
    _res_D_x1(0, 2) = -_tmp103 * _tmp80 - _tmp103 * _tmp81;
    _res_D_x1(1, 2) = -_tmp103 * _tmp82 - _tmp103 * _tmp83;
  }

  if (res_D_x2 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x2{res_D_x2};

    _res_D_x2(0, 0) = _tmp121 * sqrt_info(0, 1) + _tmp122 * sqrt_info(0, 0);
    _res_D_x2(1, 0) = _tmp121 * sqrt_info(1, 1) + _tmp122 * sqrt_info(1, 0);
    _res_D_x2(0, 1) = -_tmp123 * _tmp76 + _tmp123 * _tmp77;
    _res_D_x2(1, 1) = -_tmp123 * _tmp78 + _tmp123 * _tmp79;
    _res_D_x2(0, 2) = -_tmp123 * _tmp80 - _tmp123 * _tmp81;
    _res_D_x2(1, 2) = -_tmp123 * _tmp82 - _tmp123 * _tmp83;
  }

  if (res_D_x3 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x3{res_D_x3};

    _res_D_x3(0, 0) = _tmp135 * sqrt_info(0, 1) + _tmp136 * sqrt_info(0, 0);
    _res_D_x3(1, 0) = _tmp135 * sqrt_info(1, 1) + _tmp136 * sqrt_info(1, 0);
    _res_D_x3(0, 1) = -_tmp76 * lambdas(2, 0) + _tmp77 * lambdas(2, 0);
    _res_D_x3(1, 1) = -_tmp78 * lambdas(2, 0) + _tmp79 * lambdas(2, 0);
    _res_D_x3(0, 2) = -_tmp80 * lambdas(2, 0) - _tmp81 * lambdas(2, 0);
    _res_D_x3(1, 2) = -_tmp82 * lambdas(2, 0) - _tmp83 * lambdas(2, 0);
  }

  if (res_D_x_T_s != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x_T_s{res_D_x_T_s};

    _res_D_x_T_s(0, 0) = _tmp138 * sqrt_info(0, 0) + _tmp139 * sqrt_info(0, 1);
    _res_D_x_T_s(1, 0) = _tmp138 * sqrt_info(1, 0) + _tmp139 * sqrt_info(1, 1);
    _res_D_x_T_s(0, 1) = _tmp141 * sqrt_info(0, 1) + _tmp143 * sqrt_info(0, 0);
    _res_D_x_T_s(1, 1) = _tmp141 * sqrt_info(1, 1) + _tmp143 * sqrt_info(1, 0);
    _res_D_x_T_s(0, 2) = _tmp144 * sqrt_info(0, 0) + _tmp145 * sqrt_info(0, 1);
    _res_D_x_T_s(1, 2) = _tmp144 * sqrt_info(1, 0) + _tmp145 * sqrt_info(1, 1);
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = 0;
    _res_D_y(1, 0) = 0;
    _res_D_y(0, 1) = _tmp137 * sqrt_info(0, 1) + _tmp76;
    _res_D_y(1, 1) = _tmp137 * sqrt_info(1, 1) + _tmp78;
    _res_D_y(0, 2) = _tmp80 + _tmp81;
    _res_D_y(1, 2) = _tmp82 + _tmp83;
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
