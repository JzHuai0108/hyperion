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
 * Symbolic function: spline3_pose2_r2_sensor_relative_between_factor
 *
 * Args:
 *     lambdas_x: Matrix31
 *     x0: Pose2
 *     x1: Pose2
 *     x2: Pose2
 *     x3: Pose2
 *     x_T_a: Pose2
 *     a_T_b: Matrix21
 *     lambdas_y: Matrix31
 *     y0: Pose2
 *     y1: Pose2
 *     y2: Pose2
 *     y3: Pose2
 *     y_T_b: Pose2
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 *     res_D_x0: (2x3) jacobian of res (2) wrt arg x0 (3)
 *     res_D_x1: (2x3) jacobian of res (2) wrt arg x1 (3)
 *     res_D_x2: (2x3) jacobian of res (2) wrt arg x2 (3)
 *     res_D_x3: (2x3) jacobian of res (2) wrt arg x3 (3)
 *     res_D_x_T_a: (2x3) jacobian of res (2) wrt arg x_T_a (3)
 *     res_D_y0: (2x3) jacobian of res (2) wrt arg y0 (3)
 *     res_D_y1: (2x3) jacobian of res (2) wrt arg y1 (3)
 *     res_D_y2: (2x3) jacobian of res (2) wrt arg y2 (3)
 *     res_D_y3: (2x3) jacobian of res (2) wrt arg y3 (3)
 *     res_D_y_T_b: (2x3) jacobian of res (2) wrt arg y_T_b (3)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Spline3Pose2R2SensorRelativeBetweenFactorWithJacobians1234589101112(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas_x, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const sym::Pose2<Scalar>& x_T_a, const Eigen::Matrix<Scalar, 2, 1>& a_T_b,
    const Eigen::Matrix<Scalar, 3, 1>& lambdas_y, const sym::Pose2<Scalar>& y0,
    const sym::Pose2<Scalar>& y1, const sym::Pose2<Scalar>& y2, const sym::Pose2<Scalar>& y3,
    const sym::Pose2<Scalar>& y_T_b, const Eigen::Matrix<Scalar, 2, 2>& sqrt_info,
    const Scalar epsilon, Scalar* const res_D_x0 = nullptr, Scalar* const res_D_x1 = nullptr,
    Scalar* const res_D_x2 = nullptr, Scalar* const res_D_x3 = nullptr,
    Scalar* const res_D_x_T_a = nullptr, Scalar* const res_D_y0 = nullptr,
    Scalar* const res_D_y1 = nullptr, Scalar* const res_D_y2 = nullptr,
    Scalar* const res_D_y3 = nullptr, Scalar* const res_D_y_T_b = nullptr) {
  // Total ops: 920

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_a = x_T_a.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y0 = y0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y1 = y1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y2 = y2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y3 = y3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y_T_b = y_T_b.Data();

  // Intermediate terms (274)
  const Scalar _tmp0 = _x2[1] * _x3[0];
  const Scalar _tmp1 = _x2[0] * _x3[1];
  const Scalar _tmp2 = -_tmp0 + _tmp1;
  const Scalar _tmp3 = _x2[0] * _x3[0];
  const Scalar _tmp4 = _x2[1] * _x3[1];
  const Scalar _tmp5 = _tmp3 + _tmp4;
  const Scalar _tmp6 = _tmp5 + epsilon * ((((_tmp5) > 0) - ((_tmp5) < 0)) + Scalar(0.5));
  const Scalar _tmp7 = lambdas_x(2, 0) * std::atan2(_tmp2, _tmp6);
  const Scalar _tmp8 = std::cos(_tmp7);
  const Scalar _tmp9 = _x1[0] * _x2[1];
  const Scalar _tmp10 = _x1[1] * _x2[0];
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = _x1[0] * _x2[0];
  const Scalar _tmp13 = _x1[1] * _x2[1];
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = _tmp14 + epsilon * ((((_tmp14) > 0) - ((_tmp14) < 0)) + Scalar(0.5));
  const Scalar _tmp16 = lambdas_x(1, 0) * std::atan2(_tmp11, _tmp15);
  const Scalar _tmp17 = std::cos(_tmp16);
  const Scalar _tmp18 = _tmp17 * _tmp8;
  const Scalar _tmp19 = std::sin(_tmp7);
  const Scalar _tmp20 = std::sin(_tmp16);
  const Scalar _tmp21 = _tmp19 * _tmp20;
  const Scalar _tmp22 = _tmp18 - _tmp21;
  const Scalar _tmp23 = _x0[1] * _x1[0];
  const Scalar _tmp24 = _x0[0] * _x1[1];
  const Scalar _tmp25 = -_tmp23 + _tmp24;
  const Scalar _tmp26 = _x0[1] * _x1[1];
  const Scalar _tmp27 = _x0[0] * _x1[0];
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp28 + epsilon * ((((_tmp28) > 0) - ((_tmp28) < 0)) + Scalar(0.5));
  const Scalar _tmp30 = lambdas_x(0, 0) * std::atan2(_tmp25, _tmp29);
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
  const Scalar _tmp45 = _tmp38 * _x0[0] - _tmp42 * _x0[1];
  const Scalar _tmp46 = -_tmp44 * _x_T_a[1] + _tmp45 * _x_T_a[0];
  const Scalar _tmp47 = _tmp44 * _x_T_a[2] + _tmp45 * _x_T_a[3] + _x0[3] +
                        lambdas_x(0, 0) * (-_x0[3] + _x1[3]) +
                        lambdas_x(1, 0) * (-_x1[3] + _x2[3]) + lambdas_x(2, 0) * (-_x2[3] + _x3[3]);
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp44 * _x_T_a[0];
  const Scalar _tmp50 = _tmp45 * _x_T_a[1];
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = -_tmp44 * _x_T_a[3] + _tmp45 * _x_T_a[2] + _x0[2] +
                        lambdas_x(0, 0) * (-_x0[2] + _x1[2]) +
                        lambdas_x(1, 0) * (-_x1[2] + _x2[2]) + lambdas_x(2, 0) * (-_x2[2] + _x3[2]);
  const Scalar _tmp53 = _y1[0] * _y2[1];
  const Scalar _tmp54 = _y1[1] * _y2[0];
  const Scalar _tmp55 = _tmp53 - _tmp54;
  const Scalar _tmp56 = _y1[0] * _y2[0];
  const Scalar _tmp57 = _y1[1] * _y2[1];
  const Scalar _tmp58 = _tmp56 + _tmp57;
  const Scalar _tmp59 = _tmp58 + epsilon * ((((_tmp58) > 0) - ((_tmp58) < 0)) + Scalar(0.5));
  const Scalar _tmp60 = lambdas_y(1, 0) * std::atan2(_tmp55, _tmp59);
  const Scalar _tmp61 = std::sin(_tmp60);
  const Scalar _tmp62 = _y2[0] * _y3[1];
  const Scalar _tmp63 = _y2[1] * _y3[0];
  const Scalar _tmp64 = _tmp62 - _tmp63;
  const Scalar _tmp65 = _y2[1] * _y3[1];
  const Scalar _tmp66 = _y2[0] * _y3[0];
  const Scalar _tmp67 = _tmp65 + _tmp66;
  const Scalar _tmp68 = _tmp67 + epsilon * ((((_tmp67) > 0) - ((_tmp67) < 0)) + Scalar(0.5));
  const Scalar _tmp69 = lambdas_y(2, 0) * std::atan2(_tmp64, _tmp68);
  const Scalar _tmp70 = std::cos(_tmp69);
  const Scalar _tmp71 = _tmp61 * _tmp70;
  const Scalar _tmp72 = std::cos(_tmp60);
  const Scalar _tmp73 = std::sin(_tmp69);
  const Scalar _tmp74 = _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp71 + _tmp74;
  const Scalar _tmp76 = _y0[1] * _y1[0];
  const Scalar _tmp77 = _y0[0] * _y1[1];
  const Scalar _tmp78 = -_tmp76 + _tmp77;
  const Scalar _tmp79 = _y0[0] * _y1[0];
  const Scalar _tmp80 = _y0[1] * _y1[1];
  const Scalar _tmp81 = _tmp79 + _tmp80;
  const Scalar _tmp82 = _tmp81 + epsilon * ((((_tmp81) > 0) - ((_tmp81) < 0)) + Scalar(0.5));
  const Scalar _tmp83 = lambdas_y(0, 0) * std::atan2(_tmp78, _tmp82);
  const Scalar _tmp84 = std::sin(_tmp83);
  const Scalar _tmp85 = _tmp75 * _tmp84;
  const Scalar _tmp86 = _tmp61 * _tmp73;
  const Scalar _tmp87 = _tmp70 * _tmp72;
  const Scalar _tmp88 = -_tmp86 + _tmp87;
  const Scalar _tmp89 = std::cos(_tmp83);
  const Scalar _tmp90 = _tmp88 * _tmp89;
  const Scalar _tmp91 = -_tmp85 + _tmp90;
  const Scalar _tmp92 = _tmp91 * _y0[1];
  const Scalar _tmp93 = _tmp75 * _tmp89;
  const Scalar _tmp94 = _tmp84 * _tmp88;
  const Scalar _tmp95 = _tmp93 + _tmp94;
  const Scalar _tmp96 = _tmp95 * _y0[0];
  const Scalar _tmp97 = _tmp92 + _tmp96;
  const Scalar _tmp98 = _tmp91 * _y0[0] - _tmp95 * _y0[1];
  const Scalar _tmp99 = _tmp97 * _y_T_b[2] + _tmp98 * _y_T_b[3] + _y0[3] +
                        lambdas_y(0, 0) * (-_y0[3] + _y1[3]) +
                        lambdas_y(1, 0) * (-_y1[3] + _y2[3]) + lambdas_y(2, 0) * (-_y2[3] + _y3[3]);
  const Scalar _tmp100 = _tmp46 * _tmp99;
  const Scalar _tmp101 =
      -_tmp97 * _y_T_b[3] + _tmp98 * _y_T_b[2] + _y0[2] + lambdas_y(0, 0) * (-_y0[2] + _y1[2]) +
      lambdas_y(1, 0) * (-_y1[2] + _y2[2]) + lambdas_y(2, 0) * (-_y2[2] + _y3[2]);
  const Scalar _tmp102 = _tmp100 - _tmp101 * _tmp51 - _tmp48 + _tmp51 * _tmp52 - a_T_b(1, 0);
  const Scalar _tmp103 = _tmp46 * _tmp52;
  const Scalar _tmp104 = _tmp101 * _tmp46;
  const Scalar _tmp105 = -_tmp103 + _tmp104 - _tmp47 * _tmp51 + _tmp51 * _tmp99 - a_T_b(0, 0);
  const Scalar _tmp106 = std::pow(_tmp25, Scalar(2));
  const Scalar _tmp107 = std::pow(_tmp29, Scalar(2));
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = Scalar(1.0) / (_tmp29);
  const Scalar _tmp110 = _tmp107 * lambdas_x(0, 0) / (_tmp106 + _tmp107);
  const Scalar _tmp111 = _tmp110 * (-_tmp106 * _tmp108 + _tmp109 * (-_tmp26 - _tmp27));
  const Scalar _tmp112 = -_tmp111 * _tmp40 - _tmp111 * _tmp41;
  const Scalar _tmp113 = _tmp111 * _tmp32 - _tmp111 * _tmp37;
  const Scalar _tmp114 = _tmp112 * _x0[1] + _tmp113 * _x0[0] + _tmp45;
  const Scalar _tmp115 = -_tmp39 - _tmp43;
  const Scalar _tmp116 = _tmp112 * _x0[0] - _tmp113 * _x0[1] + _tmp115;
  const Scalar _tmp117 = -_tmp114 * _x_T_a[1] + _tmp116 * _x_T_a[0];
  const Scalar _tmp118 = _tmp114 * _x_T_a[0] + _tmp116 * _x_T_a[1];
  const Scalar _tmp119 = -_tmp114 * _x_T_a[3] + _tmp116 * _x_T_a[2];
  const Scalar _tmp120 = _tmp114 * _x_T_a[2] + _tmp116 * _x_T_a[3];
  const Scalar _tmp121 = _tmp101 * _tmp117 - _tmp117 * _tmp52 - _tmp118 * _tmp47 +
                         _tmp118 * _tmp99 - _tmp119 * _tmp46 - _tmp120 * _tmp51;
  const Scalar _tmp122 = -_tmp101 * _tmp118 - _tmp117 * _tmp47 + _tmp117 * _tmp99 +
                         _tmp118 * _tmp52 + _tmp119 * _tmp51 - _tmp120 * _tmp46;
  const Scalar _tmp123 = 1 - lambdas_x(0, 0);
  const Scalar _tmp124 = _tmp123 * sqrt_info(0, 0);
  const Scalar _tmp125 = _tmp51 * sqrt_info(0, 1);
  const Scalar _tmp126 = _tmp123 * _tmp46;
  const Scalar _tmp127 = _tmp51 * sqrt_info(1, 1);
  const Scalar _tmp128 = _tmp51 * sqrt_info(1, 0);
  const Scalar _tmp129 = std::pow(_tmp11, Scalar(2));
  const Scalar _tmp130 = std::pow(_tmp15, Scalar(2));
  const Scalar _tmp131 = Scalar(1.0) / (_tmp130);
  const Scalar _tmp132 = Scalar(1.0) / (_tmp15);
  const Scalar _tmp133 = _tmp130 * lambdas_x(1, 0) / (_tmp129 + _tmp130);
  const Scalar _tmp134 = _tmp133 * (-_tmp129 * _tmp131 + _tmp132 * (-_tmp12 - _tmp13));
  const Scalar _tmp135 = -_tmp134 * _tmp33 - _tmp134 * _tmp34;
  const Scalar _tmp136 = _tmp110 * (-_tmp108 * _tmp25 * (_tmp23 - _tmp24) + _tmp109 * _tmp28);
  const Scalar _tmp137 = _tmp134 * _tmp18 - _tmp134 * _tmp21;
  const Scalar _tmp138 = _tmp135 * _tmp36 + _tmp136 * _tmp32 - _tmp136 * _tmp37 + _tmp137 * _tmp31;
  const Scalar _tmp139 = _tmp135 * _tmp31 - _tmp136 * _tmp40 - _tmp136 * _tmp41 - _tmp137 * _tmp36;
  const Scalar _tmp140 = _tmp138 * _x0[0] + _tmp139 * _x0[1];
  const Scalar _tmp141 = -_tmp138 * _x0[1] + _tmp139 * _x0[0];
  const Scalar _tmp142 = _tmp140 * _x_T_a[0] + _tmp141 * _x_T_a[1];
  const Scalar _tmp143 = -_tmp140 * _x_T_a[1] + _tmp141 * _x_T_a[0];
  const Scalar _tmp144 = _tmp140 * _x_T_a[2] + _tmp141 * _x_T_a[3];
  const Scalar _tmp145 = -_tmp140 * _x_T_a[3] + _tmp141 * _x_T_a[2];
  const Scalar _tmp146 = _tmp101 * _tmp143 - _tmp142 * _tmp47 + _tmp142 * _tmp99 -
                         _tmp143 * _tmp52 - _tmp144 * _tmp51 - _tmp145 * _tmp46;
  const Scalar _tmp147 = -_tmp101 * _tmp142 + _tmp142 * _tmp52 - _tmp143 * _tmp47 +
                         _tmp143 * _tmp99 - _tmp144 * _tmp46 + _tmp145 * _tmp51;
  const Scalar _tmp148 = lambdas_x(0, 0) - lambdas_x(1, 0);
  const Scalar _tmp149 = _tmp148 * sqrt_info(0, 0);
  const Scalar _tmp150 = _tmp46 * sqrt_info(1, 0);
  const Scalar _tmp151 = _tmp46 * sqrt_info(0, 1);
  const Scalar _tmp152 = _tmp46 * sqrt_info(1, 1);
  const Scalar _tmp153 = _tmp133 * (-_tmp11 * _tmp131 * (_tmp10 - _tmp9) + _tmp132 * _tmp14);
  const Scalar _tmp154 = std::pow(_tmp2, Scalar(2));
  const Scalar _tmp155 = std::pow(_tmp6, Scalar(2));
  const Scalar _tmp156 = Scalar(1.0) / (_tmp155);
  const Scalar _tmp157 = Scalar(1.0) / (_tmp6);
  const Scalar _tmp158 = _tmp155 * lambdas_x(2, 0) / (_tmp154 + _tmp155);
  const Scalar _tmp159 = _tmp158 * (-_tmp154 * _tmp156 + _tmp157 * (-_tmp3 - _tmp4));
  const Scalar _tmp160 = -_tmp153 * _tmp33 - _tmp153 * _tmp34 - _tmp159 * _tmp33 - _tmp159 * _tmp34;
  const Scalar _tmp161 = _tmp153 * _tmp18 - _tmp153 * _tmp21 + _tmp159 * _tmp18 - _tmp159 * _tmp21;
  const Scalar _tmp162 = _tmp160 * _tmp31 - _tmp161 * _tmp36;
  const Scalar _tmp163 = _tmp160 * _tmp36 + _tmp161 * _tmp31;
  const Scalar _tmp164 = _tmp162 * _x0[0] - _tmp163 * _x0[1];
  const Scalar _tmp165 = _tmp162 * _x0[1] + _tmp163 * _x0[0];
  const Scalar _tmp166 = _tmp164 * _x_T_a[0] - _tmp165 * _x_T_a[1];
  const Scalar _tmp167 = _tmp164 * _x_T_a[1] + _tmp165 * _x_T_a[0];
  const Scalar _tmp168 = _tmp164 * _x_T_a[3] + _tmp165 * _x_T_a[2];
  const Scalar _tmp169 = _tmp164 * _x_T_a[2] - _tmp165 * _x_T_a[3];
  const Scalar _tmp170 = -_tmp101 * _tmp167 - _tmp166 * _tmp47 + _tmp166 * _tmp99 +
                         _tmp167 * _tmp52 - _tmp168 * _tmp46 + _tmp169 * _tmp51;
  const Scalar _tmp171 = _tmp101 * _tmp166 - _tmp166 * _tmp52 - _tmp167 * _tmp47 +
                         _tmp167 * _tmp99 - _tmp168 * _tmp51 - _tmp169 * _tmp46;
  const Scalar _tmp172 = lambdas_x(1, 0) - lambdas_x(2, 0);
  const Scalar _tmp173 = _tmp172 * _tmp51;
  const Scalar _tmp174 = _tmp172 * _tmp46;
  const Scalar _tmp175 = _tmp158 * (-_tmp156 * _tmp2 * (_tmp0 - _tmp1) + _tmp157 * _tmp5);
  const Scalar _tmp176 = _tmp175 * _tmp18 - _tmp175 * _tmp21;
  const Scalar _tmp177 = -_tmp175 * _tmp33 - _tmp175 * _tmp34;
  const Scalar _tmp178 = -_tmp176 * _tmp36 + _tmp177 * _tmp31;
  const Scalar _tmp179 = _tmp176 * _tmp31 + _tmp177 * _tmp36;
  const Scalar _tmp180 = _tmp178 * _x0[0] - _tmp179 * _x0[1];
  const Scalar _tmp181 = _tmp178 * _x0[1] + _tmp179 * _x0[0];
  const Scalar _tmp182 = _tmp180 * _x_T_a[1] + _tmp181 * _x_T_a[0];
  const Scalar _tmp183 = _tmp180 * _x_T_a[0] - _tmp181 * _x_T_a[1];
  const Scalar _tmp184 = _tmp180 * _x_T_a[3] + _tmp181 * _x_T_a[2];
  const Scalar _tmp185 = _tmp180 * _x_T_a[2] - _tmp181 * _x_T_a[3];
  const Scalar _tmp186 = _tmp101 * _tmp183 - _tmp182 * _tmp47 + _tmp182 * _tmp99 -
                         _tmp183 * _tmp52 - _tmp184 * _tmp51 - _tmp185 * _tmp46;
  const Scalar _tmp187 = -_tmp101 * _tmp182 + _tmp182 * _tmp52 - _tmp183 * _tmp47 +
                         _tmp183 * _tmp99 - _tmp184 * _tmp46 + _tmp185 * _tmp51;
  const Scalar _tmp188 = _tmp46 * lambdas_x(2, 0);
  const Scalar _tmp189 = _tmp51 * lambdas_x(2, 0);
  const Scalar _tmp190 = -_tmp49 - _tmp50;
  const Scalar _tmp191 = _tmp103 - _tmp104 - _tmp190 * _tmp47 + _tmp190 * _tmp99;
  const Scalar _tmp192 = _tmp100 + _tmp101 * _tmp190 - _tmp190 * _tmp52 - _tmp48;
  const Scalar _tmp193 = -_tmp45 * _tmp46;
  const Scalar _tmp194 = _tmp193 - _tmp44 * _tmp51;
  const Scalar _tmp195 = _tmp45 * _tmp51;
  const Scalar _tmp196 = _tmp195 - _tmp44 * _tmp46;
  const Scalar _tmp197 = _tmp115 * _tmp51 + _tmp193;
  const Scalar _tmp198 = -_tmp115 * _tmp46 - _tmp195;
  const Scalar _tmp199 = std::pow(_tmp78, Scalar(2));
  const Scalar _tmp200 = std::pow(_tmp82, Scalar(2));
  const Scalar _tmp201 = Scalar(1.0) / (_tmp200);
  const Scalar _tmp202 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp203 = _tmp200 * lambdas_y(0, 0) / (_tmp199 + _tmp200);
  const Scalar _tmp204 = _tmp203 * (-_tmp199 * _tmp201 + _tmp202 * (-_tmp79 - _tmp80));
  const Scalar _tmp205 = -_tmp204 * _tmp93 - _tmp204 * _tmp94;
  const Scalar _tmp206 = -_tmp204 * _tmp85 + _tmp204 * _tmp90;
  const Scalar _tmp207 = -_tmp92 - _tmp96;
  const Scalar _tmp208 = _tmp205 * _y0[0] - _tmp206 * _y0[1] + _tmp207;
  const Scalar _tmp209 = _tmp205 * _y0[1] + _tmp206 * _y0[0] + _tmp98;
  const Scalar _tmp210 = _tmp208 * _y_T_b[2] - _tmp209 * _y_T_b[3];
  const Scalar _tmp211 = _tmp208 * _y_T_b[3] + _tmp209 * _y_T_b[2];
  const Scalar _tmp212 = -_tmp210 * _tmp51 + _tmp211 * _tmp46;
  const Scalar _tmp213 = _tmp210 * _tmp46 + _tmp211 * _tmp51;
  const Scalar _tmp214 = 1 - lambdas_y(0, 0);
  const Scalar _tmp215 = _tmp214 * _tmp46;
  const Scalar _tmp216 = _tmp214 * _tmp51;
  const Scalar _tmp217 = Scalar(1.0) / (_tmp59);
  const Scalar _tmp218 = std::pow(_tmp55, Scalar(2));
  const Scalar _tmp219 = std::pow(_tmp59, Scalar(2));
  const Scalar _tmp220 = Scalar(1.0) / (_tmp219);
  const Scalar _tmp221 = _tmp219 * lambdas_y(1, 0) / (_tmp218 + _tmp219);
  const Scalar _tmp222 = _tmp221 * (_tmp217 * (-_tmp56 - _tmp57) - _tmp218 * _tmp220);
  const Scalar _tmp223 = -_tmp222 * _tmp71 - _tmp222 * _tmp74;
  const Scalar _tmp224 = -_tmp222 * _tmp86 + _tmp222 * _tmp87;
  const Scalar _tmp225 = _tmp203 * (-_tmp201 * _tmp78 * (_tmp76 - _tmp77) + _tmp202 * _tmp81);
  const Scalar _tmp226 = _tmp223 * _tmp84 + _tmp224 * _tmp89 - _tmp225 * _tmp85 + _tmp225 * _tmp90;
  const Scalar _tmp227 = _tmp223 * _tmp89 - _tmp224 * _tmp84 - _tmp225 * _tmp93 - _tmp225 * _tmp94;
  const Scalar _tmp228 = -_tmp226 * _y0[1] + _tmp227 * _y0[0];
  const Scalar _tmp229 = _tmp226 * _y0[0] + _tmp227 * _y0[1];
  const Scalar _tmp230 = _tmp228 * _y_T_b[2] - _tmp229 * _y_T_b[3];
  const Scalar _tmp231 = _tmp228 * _y_T_b[3] + _tmp229 * _y_T_b[2];
  const Scalar _tmp232 = _tmp230 * _tmp46 + _tmp231 * _tmp51;
  const Scalar _tmp233 = -_tmp230 * _tmp51 + _tmp231 * _tmp46;
  const Scalar _tmp234 = lambdas_y(0, 0) - lambdas_y(1, 0);
  const Scalar _tmp235 = _tmp234 * sqrt_info(0, 0);
  const Scalar _tmp236 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp237 = std::pow(_tmp64, Scalar(2));
  const Scalar _tmp238 = std::pow(_tmp68, Scalar(2));
  const Scalar _tmp239 = Scalar(1.0) / (_tmp238);
  const Scalar _tmp240 = _tmp238 * lambdas_y(2, 0) / (_tmp237 + _tmp238);
  const Scalar _tmp241 = _tmp240 * (_tmp236 * (-_tmp65 - _tmp66) - _tmp237 * _tmp239);
  const Scalar _tmp242 = _tmp221 * (_tmp217 * _tmp58 - _tmp220 * _tmp55 * (-_tmp53 + _tmp54));
  const Scalar _tmp243 = -_tmp241 * _tmp86 + _tmp241 * _tmp87 - _tmp242 * _tmp86 + _tmp242 * _tmp87;
  const Scalar _tmp244 = -_tmp241 * _tmp71 - _tmp241 * _tmp74 - _tmp242 * _tmp71 - _tmp242 * _tmp74;
  const Scalar _tmp245 = _tmp243 * _tmp89 + _tmp244 * _tmp84;
  const Scalar _tmp246 = -_tmp243 * _tmp84 + _tmp244 * _tmp89;
  const Scalar _tmp247 = _tmp245 * _y0[0] + _tmp246 * _y0[1];
  const Scalar _tmp248 = -_tmp245 * _y0[1] + _tmp246 * _y0[0];
  const Scalar _tmp249 = -_tmp247 * _y_T_b[3] + _tmp248 * _y_T_b[2];
  const Scalar _tmp250 = _tmp247 * _y_T_b[2] + _tmp248 * _y_T_b[3];
  const Scalar _tmp251 = -_tmp249 * _tmp51 + _tmp250 * _tmp46;
  const Scalar _tmp252 = _tmp249 * _tmp46 + _tmp250 * _tmp51;
  const Scalar _tmp253 = lambdas_y(1, 0) - lambdas_y(2, 0);
  const Scalar _tmp254 = _tmp253 * _tmp51;
  const Scalar _tmp255 = _tmp253 * _tmp46;
  const Scalar _tmp256 = _tmp240 * (_tmp236 * _tmp67 - _tmp239 * _tmp64 * (-_tmp62 + _tmp63));
  const Scalar _tmp257 = -_tmp256 * _tmp71 - _tmp256 * _tmp74;
  const Scalar _tmp258 = -_tmp256 * _tmp86 + _tmp256 * _tmp87;
  const Scalar _tmp259 = _tmp257 * _tmp84 + _tmp258 * _tmp89;
  const Scalar _tmp260 = _tmp257 * _tmp89 - _tmp258 * _tmp84;
  const Scalar _tmp261 = -_tmp259 * _y0[1] + _tmp260 * _y0[0];
  const Scalar _tmp262 = _tmp259 * _y0[0] + _tmp260 * _y0[1];
  const Scalar _tmp263 = _tmp261 * _y_T_b[2] - _tmp262 * _y_T_b[3];
  const Scalar _tmp264 = _tmp261 * _y_T_b[3] + _tmp262 * _y_T_b[2];
  const Scalar _tmp265 = _tmp263 * _tmp46 + _tmp264 * _tmp51;
  const Scalar _tmp266 = -_tmp263 * _tmp51 + _tmp264 * _tmp46;
  const Scalar _tmp267 = _tmp51 * lambdas_y(2, 0);
  const Scalar _tmp268 = _tmp46 * _tmp98;
  const Scalar _tmp269 = _tmp268 + _tmp51 * _tmp97;
  const Scalar _tmp270 = _tmp51 * _tmp98;
  const Scalar _tmp271 = -_tmp270 + _tmp46 * _tmp97;
  const Scalar _tmp272 = -_tmp207 * _tmp51 + _tmp268;
  const Scalar _tmp273 = _tmp207 * _tmp46 + _tmp270;

  // Output terms (11)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp102 * sqrt_info(0, 1) + _tmp105 * sqrt_info(0, 0);
  _res(1, 0) = _tmp102 * sqrt_info(1, 1) + _tmp105 * sqrt_info(1, 0);

  if (res_D_x0 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x0{res_D_x0};

    _res_D_x0(0, 0) = _tmp121 * sqrt_info(0, 0) + _tmp122 * sqrt_info(0, 1);
    _res_D_x0(1, 0) = _tmp121 * sqrt_info(1, 0) + _tmp122 * sqrt_info(1, 1);
    _res_D_x0(0, 1) = _tmp123 * _tmp125 - _tmp124 * _tmp46;
    _res_D_x0(1, 1) = _tmp123 * _tmp127 - _tmp126 * sqrt_info(1, 0);
    _res_D_x0(0, 2) = -_tmp124 * _tmp51 - _tmp126 * sqrt_info(0, 1);
    _res_D_x0(1, 2) = -_tmp123 * _tmp128 - _tmp126 * sqrt_info(1, 1);
  }

  if (res_D_x1 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x1{res_D_x1};

    _res_D_x1(0, 0) = _tmp146 * sqrt_info(0, 0) + _tmp147 * sqrt_info(0, 1);
    _res_D_x1(1, 0) = _tmp146 * sqrt_info(1, 0) + _tmp147 * sqrt_info(1, 1);
    _res_D_x1(0, 1) = _tmp125 * _tmp148 - _tmp149 * _tmp46;
    _res_D_x1(1, 1) = _tmp127 * _tmp148 - _tmp148 * _tmp150;
    _res_D_x1(0, 2) = -_tmp148 * _tmp151 - _tmp149 * _tmp51;
    _res_D_x1(1, 2) = -_tmp128 * _tmp148 - _tmp148 * _tmp152;
  }

  if (res_D_x2 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x2{res_D_x2};

    _res_D_x2(0, 0) = _tmp170 * sqrt_info(0, 1) + _tmp171 * sqrt_info(0, 0);
    _res_D_x2(1, 0) = _tmp170 * sqrt_info(1, 1) + _tmp171 * sqrt_info(1, 0);
    _res_D_x2(0, 1) = _tmp173 * sqrt_info(0, 1) - _tmp174 * sqrt_info(0, 0);
    _res_D_x2(1, 1) = _tmp173 * sqrt_info(1, 1) - _tmp174 * sqrt_info(1, 0);
    _res_D_x2(0, 2) = -_tmp173 * sqrt_info(0, 0) - _tmp174 * sqrt_info(0, 1);
    _res_D_x2(1, 2) = -_tmp173 * sqrt_info(1, 0) - _tmp174 * sqrt_info(1, 1);
  }

  if (res_D_x3 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x3{res_D_x3};

    _res_D_x3(0, 0) = _tmp186 * sqrt_info(0, 0) + _tmp187 * sqrt_info(0, 1);
    _res_D_x3(1, 0) = _tmp186 * sqrt_info(1, 0) + _tmp187 * sqrt_info(1, 1);
    _res_D_x3(0, 1) = _tmp125 * lambdas_x(2, 0) - _tmp188 * sqrt_info(0, 0);
    _res_D_x3(1, 1) = -_tmp188 * sqrt_info(1, 0) + _tmp189 * sqrt_info(1, 1);
    _res_D_x3(0, 2) = -_tmp188 * sqrt_info(0, 1) - _tmp189 * sqrt_info(0, 0);
    _res_D_x3(1, 2) = -_tmp188 * sqrt_info(1, 1) - _tmp189 * sqrt_info(1, 0);
  }

  if (res_D_x_T_a != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_x_T_a{res_D_x_T_a};

    _res_D_x_T_a(0, 0) = _tmp191 * sqrt_info(0, 1) + _tmp192 * sqrt_info(0, 0);
    _res_D_x_T_a(1, 0) = _tmp191 * sqrt_info(1, 1) + _tmp192 * sqrt_info(1, 0);
    _res_D_x_T_a(0, 1) = _tmp194 * sqrt_info(0, 0) + _tmp196 * sqrt_info(0, 1);
    _res_D_x_T_a(1, 1) = _tmp194 * sqrt_info(1, 0) + _tmp196 * sqrt_info(1, 1);
    _res_D_x_T_a(0, 2) = _tmp197 * sqrt_info(0, 1) + _tmp198 * sqrt_info(0, 0);
    _res_D_x_T_a(1, 2) = _tmp197 * sqrt_info(1, 1) + _tmp198 * sqrt_info(1, 0);
  }

  if (res_D_y0 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_y0{res_D_y0};

    _res_D_y0(0, 0) = _tmp212 * sqrt_info(0, 1) + _tmp213 * sqrt_info(0, 0);
    _res_D_y0(1, 0) = _tmp212 * sqrt_info(1, 1) + _tmp213 * sqrt_info(1, 0);
    _res_D_y0(0, 1) = -_tmp125 * _tmp214 + _tmp215 * sqrt_info(0, 0);
    _res_D_y0(1, 1) = -_tmp127 * _tmp214 + _tmp215 * sqrt_info(1, 0);
    _res_D_y0(0, 2) = _tmp215 * sqrt_info(0, 1) + _tmp216 * sqrt_info(0, 0);
    _res_D_y0(1, 2) = _tmp215 * sqrt_info(1, 1) + _tmp216 * sqrt_info(1, 0);
  }

  if (res_D_y1 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_y1{res_D_y1};

    _res_D_y1(0, 0) = _tmp232 * sqrt_info(0, 0) + _tmp233 * sqrt_info(0, 1);
    _res_D_y1(1, 0) = _tmp232 * sqrt_info(1, 0) + _tmp233 * sqrt_info(1, 1);
    _res_D_y1(0, 1) = -_tmp125 * _tmp234 + _tmp235 * _tmp46;
    _res_D_y1(1, 1) = -_tmp127 * _tmp234 + _tmp150 * _tmp234;
    _res_D_y1(0, 2) = _tmp151 * _tmp234 + _tmp235 * _tmp51;
    _res_D_y1(1, 2) = _tmp128 * _tmp234 + _tmp152 * _tmp234;
  }

  if (res_D_y2 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_y2{res_D_y2};

    _res_D_y2(0, 0) = _tmp251 * sqrt_info(0, 1) + _tmp252 * sqrt_info(0, 0);
    _res_D_y2(1, 0) = _tmp251 * sqrt_info(1, 1) + _tmp252 * sqrt_info(1, 0);
    _res_D_y2(0, 1) = -_tmp254 * sqrt_info(0, 1) + _tmp255 * sqrt_info(0, 0);
    _res_D_y2(1, 1) = -_tmp254 * sqrt_info(1, 1) + _tmp255 * sqrt_info(1, 0);
    _res_D_y2(0, 2) = _tmp254 * sqrt_info(0, 0) + _tmp255 * sqrt_info(0, 1);
    _res_D_y2(1, 2) = _tmp254 * sqrt_info(1, 0) + _tmp255 * sqrt_info(1, 1);
  }

  if (res_D_y3 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_y3{res_D_y3};

    _res_D_y3(0, 0) = _tmp265 * sqrt_info(0, 0) + _tmp266 * sqrt_info(0, 1);
    _res_D_y3(1, 0) = _tmp265 * sqrt_info(1, 0) + _tmp266 * sqrt_info(1, 1);
    _res_D_y3(0, 1) = -_tmp125 * lambdas_y(2, 0) + _tmp46 * lambdas_y(2, 0) * sqrt_info(0, 0);
    _res_D_y3(1, 1) = _tmp150 * lambdas_y(2, 0) - _tmp267 * sqrt_info(1, 1);
    _res_D_y3(0, 2) = _tmp151 * lambdas_y(2, 0) + _tmp267 * sqrt_info(0, 0);
    _res_D_y3(1, 2) = _tmp152 * lambdas_y(2, 0) + _tmp267 * sqrt_info(1, 0);
  }

  if (res_D_y_T_b != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3>> _res_D_y_T_b{res_D_y_T_b};

    _res_D_y_T_b(0, 0) = 0;
    _res_D_y_T_b(1, 0) = 0;
    _res_D_y_T_b(0, 1) = _tmp269 * sqrt_info(0, 0) + _tmp271 * sqrt_info(0, 1);
    _res_D_y_T_b(1, 1) = _tmp269 * sqrt_info(1, 0) + _tmp271 * sqrt_info(1, 1);
    _res_D_y_T_b(0, 2) = _tmp272 * sqrt_info(0, 1) + _tmp273 * sqrt_info(0, 0);
    _res_D_y_T_b(1, 2) = _tmp272 * sqrt_info(1, 1) + _tmp273 * sqrt_info(1, 0);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
