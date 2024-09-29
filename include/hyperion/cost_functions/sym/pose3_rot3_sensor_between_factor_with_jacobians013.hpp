// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose3_rot3_sensor_between_factor
 *
 * Args:
 *     x: Pose3
 *     x_T_s: Pose3
 *     s_T_y: Rot3
 *     y: Pose3
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 *     res_D_x: (3x6) jacobian of res (3) wrt arg x (6)
 *     res_D_x_T_s: (3x6) jacobian of res (3) wrt arg x_T_s (6)
 *     res_D_y: (3x6) jacobian of res (3) wrt arg y (6)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Pose3Rot3SensorBetweenFactorWithJacobians013(
    const sym::Pose3<Scalar>& x, const sym::Pose3<Scalar>& x_T_s, const sym::Rot3<Scalar>& s_T_y,
    const sym::Pose3<Scalar>& y, const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_x_T_s = nullptr,
    Scalar* const res_D_y = nullptr) {
  // Total ops: 1147

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x_T_s = x_T_s.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _s_T_y = s_T_y.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (295)
  const Scalar _tmp0 = _x[3] * _x_T_s[2];
  const Scalar _tmp1 = _x[2] * _x_T_s[3];
  const Scalar _tmp2 = _x[1] * _x_T_s[0];
  const Scalar _tmp3 = _x[0] * _x_T_s[1];
  const Scalar _tmp4 = _tmp0 + _tmp1 - _tmp2 + _tmp3;
  const Scalar _tmp5 = _tmp4 * _y[3];
  const Scalar _tmp6 = _x[3] * _x_T_s[1];
  const Scalar _tmp7 = _x[2] * _x_T_s[0];
  const Scalar _tmp8 = _x[1] * _x_T_s[3];
  const Scalar _tmp9 = _x[0] * _x_T_s[2];
  const Scalar _tmp10 = _tmp6 + _tmp7 + _tmp8 - _tmp9;
  const Scalar _tmp11 = _tmp10 * _y[0];
  const Scalar _tmp12 = _x[3] * _x_T_s[0];
  const Scalar _tmp13 = _x[2] * _x_T_s[1];
  const Scalar _tmp14 = _x[1] * _x_T_s[2];
  const Scalar _tmp15 = _x[0] * _x_T_s[3];
  const Scalar _tmp16 = _tmp12 - _tmp13 + _tmp14 + _tmp15;
  const Scalar _tmp17 = _tmp16 * _y[1];
  const Scalar _tmp18 = _x[3] * _x_T_s[3];
  const Scalar _tmp19 = _x[2] * _x_T_s[2];
  const Scalar _tmp20 = _x[1] * _x_T_s[1];
  const Scalar _tmp21 = _x[0] * _x_T_s[0];
  const Scalar _tmp22 = _tmp18 - _tmp19 - _tmp20 - _tmp21;
  const Scalar _tmp23 = _tmp22 * _y[2];
  const Scalar _tmp24 = _tmp11 - _tmp17 + _tmp23 - _tmp5;
  const Scalar _tmp25 = _tmp4 * _y[1];
  const Scalar _tmp26 = _tmp10 * _y[2];
  const Scalar _tmp27 = _tmp16 * _y[3];
  const Scalar _tmp28 = _tmp22 * _y[0];
  const Scalar _tmp29 = _tmp25 - _tmp26 - _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp4 * _y[0];
  const Scalar _tmp31 = _tmp10 * _y[3];
  const Scalar _tmp32 = _tmp16 * _y[2];
  const Scalar _tmp33 = _tmp22 * _y[1];
  const Scalar _tmp34 = -_tmp30 - _tmp31 + _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp4 * _y[2];
  const Scalar _tmp36 = _tmp10 * _y[1];
  const Scalar _tmp37 = _tmp16 * _y[0];
  const Scalar _tmp38 = _tmp22 * _y[3];
  const Scalar _tmp39 = _tmp35 + _tmp36 + _tmp37 + _tmp38;
  const Scalar _tmp40 =
      -_s_T_y[0] * _tmp39 - _s_T_y[1] * _tmp24 + _s_T_y[2] * _tmp34 + _s_T_y[3] * _tmp29;
  const Scalar _tmp41 = _s_T_y[2] * _tmp24;
  const Scalar _tmp42 = _s_T_y[0] * _tmp29;
  const Scalar _tmp43 = _s_T_y[1] * _tmp34;
  const Scalar _tmp44 = -_tmp41 - _tmp42 - _tmp43;
  const Scalar _tmp45 = _s_T_y[3] * _tmp39;
  const Scalar _tmp46 =
      2 * std::min<Scalar>(0, (((-_tmp44 + _tmp45) > 0) - ((-_tmp44 + _tmp45) < 0))) + 1;
  const Scalar _tmp47 = 2 * _tmp46;
  const Scalar _tmp48 = 1 - epsilon;
  const Scalar _tmp49 = std::min<Scalar>(_tmp48, std::fabs(_tmp44 - _tmp45));
  const Scalar _tmp50 = std::acos(_tmp49) / std::sqrt(Scalar(1 - std::pow(_tmp49, Scalar(2))));
  const Scalar _tmp51 = _tmp47 * _tmp50;
  const Scalar _tmp52 = _tmp40 * _tmp51;
  const Scalar _tmp53 =
      -_s_T_y[0] * _tmp34 + _s_T_y[1] * _tmp29 - _s_T_y[2] * _tmp39 + _s_T_y[3] * _tmp24;
  const Scalar _tmp54 = _tmp51 * _tmp53;
  const Scalar _tmp55 =
      _s_T_y[0] * _tmp24 - _s_T_y[1] * _tmp39 - _s_T_y[2] * _tmp29 + _s_T_y[3] * _tmp34;
  const Scalar _tmp56 = _tmp47 * sqrt_info(0, 1);
  const Scalar _tmp57 = _tmp55 * sqrt_info(1, 1);
  const Scalar _tmp58 = _tmp55 * sqrt_info(2, 1);
  const Scalar _tmp59 = (Scalar(1) / Scalar(2)) * _tmp3;
  const Scalar _tmp60 = -_tmp59;
  const Scalar _tmp61 = (Scalar(1) / Scalar(2)) * _tmp1;
  const Scalar _tmp62 = (Scalar(1) / Scalar(2)) * _tmp2;
  const Scalar _tmp63 = -_tmp62;
  const Scalar _tmp64 = (Scalar(1) / Scalar(2)) * _tmp0;
  const Scalar _tmp65 = -_tmp64;
  const Scalar _tmp66 = _tmp63 + _tmp65;
  const Scalar _tmp67 = _tmp60 + _tmp61 + _tmp66;
  const Scalar _tmp68 = (Scalar(1) / Scalar(2)) * _tmp19;
  const Scalar _tmp69 = (Scalar(1) / Scalar(2)) * _tmp20;
  const Scalar _tmp70 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp71 = (Scalar(1) / Scalar(2)) * _tmp21;
  const Scalar _tmp72 = _tmp70 - _tmp71;
  const Scalar _tmp73 = _tmp68 + _tmp69 + _tmp72;
  const Scalar _tmp74 = (Scalar(1) / Scalar(2)) * _tmp8;
  const Scalar _tmp75 = -_tmp74;
  const Scalar _tmp76 = (Scalar(1) / Scalar(2)) * _tmp6;
  const Scalar _tmp77 = (Scalar(1) / Scalar(2)) * _tmp9;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = (Scalar(1) / Scalar(2)) * _tmp7;
  const Scalar _tmp80 = -_tmp79;
  const Scalar _tmp81 = _tmp78 + _tmp80;
  const Scalar _tmp82 = _tmp75 + _tmp76 + _tmp81;
  const Scalar _tmp83 = (Scalar(1) / Scalar(2)) * _tmp15;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = (Scalar(1) / Scalar(2)) * _tmp14;
  const Scalar _tmp86 = (Scalar(1) / Scalar(2)) * _tmp13;
  const Scalar _tmp87 = -_tmp86;
  const Scalar _tmp88 = (Scalar(1) / Scalar(2)) * _tmp12;
  const Scalar _tmp89 = -_tmp88;
  const Scalar _tmp90 = _tmp87 + _tmp89;
  const Scalar _tmp91 = _tmp84 + _tmp85 + _tmp90;
  const Scalar _tmp92 = -_tmp67 * _y[2] - _tmp73 * _y[3] + _tmp82 * _y[1] + _tmp91 * _y[0];
  const Scalar _tmp93 = -_tmp67 * _y[3] + _tmp73 * _y[2] - _tmp82 * _y[0] + _tmp91 * _y[1];
  const Scalar _tmp94 = _tmp67 * _y[0] - _tmp73 * _y[1] - _tmp82 * _y[3] + _tmp91 * _y[2];
  const Scalar _tmp95 = _tmp67 * _y[1] + _tmp73 * _y[0] + _tmp82 * _y[2] + _tmp91 * _y[3];
  const Scalar _tmp96 =
      -_s_T_y[0] * _tmp93 + _s_T_y[1] * _tmp92 - _s_T_y[2] * _tmp95 + _s_T_y[3] * _tmp94;
  const Scalar _tmp97 = _tmp41 + _tmp42 + _tmp43 + _tmp45;
  const Scalar _tmp98 = std::fabs(_tmp97);
  const Scalar _tmp99 = std::min<Scalar>(_tmp48, _tmp98);
  const Scalar _tmp100 = 1 - std::pow(_tmp99, Scalar(2));
  const Scalar _tmp101 = std::acos(_tmp99);
  const Scalar _tmp102 = _tmp101 / std::sqrt(_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp47;
  const Scalar _tmp104 = _tmp103 * sqrt_info(0, 2);
  const Scalar _tmp105 =
      _s_T_y[0] * _tmp94 - _s_T_y[1] * _tmp95 - _s_T_y[2] * _tmp92 + _s_T_y[3] * _tmp93;
  const Scalar _tmp106 = _tmp102 * _tmp56;
  const Scalar _tmp107 =
      _s_T_y[0] * _tmp92 + _s_T_y[1] * _tmp93 + _s_T_y[2] * _tmp94 + _s_T_y[3] * _tmp95;
  const Scalar _tmp108 = _tmp46 * ((((_tmp48 - _tmp98) > 0) - ((_tmp48 - _tmp98) < 0)) + 1) *
                         (((_tmp97) > 0) - ((_tmp97) < 0));
  const Scalar _tmp109 = _tmp108 / _tmp100;
  const Scalar _tmp110 = _tmp109 * _tmp40;
  const Scalar _tmp111 = _tmp110 * sqrt_info(0, 0);
  const Scalar _tmp112 = _tmp109 * _tmp53;
  const Scalar _tmp113 = _tmp112 * sqrt_info(0, 2);
  const Scalar _tmp114 = _tmp55 * sqrt_info(0, 1);
  const Scalar _tmp115 = _tmp107 * _tmp109;
  const Scalar _tmp116 =
      -_s_T_y[0] * _tmp95 - _s_T_y[1] * _tmp94 + _s_T_y[2] * _tmp93 + _s_T_y[3] * _tmp92;
  const Scalar _tmp117 = _tmp103 * _tmp116;
  const Scalar _tmp118 = _tmp40 * sqrt_info(0, 0);
  const Scalar _tmp119 = _tmp101 * _tmp108 * _tmp99 / (_tmp100 * std::sqrt(_tmp100));
  const Scalar _tmp120 = _tmp107 * _tmp119;
  const Scalar _tmp121 = _tmp53 * sqrt_info(0, 2);
  const Scalar _tmp122 = _tmp103 * sqrt_info(1, 2);
  const Scalar _tmp123 = _tmp103 * sqrt_info(1, 1);
  const Scalar _tmp124 = _tmp110 * sqrt_info(1, 0);
  const Scalar _tmp125 = _tmp112 * sqrt_info(1, 2);
  const Scalar _tmp126 = _tmp103 * sqrt_info(1, 0);
  const Scalar _tmp127 = _tmp40 * sqrt_info(1, 0);
  const Scalar _tmp128 = _tmp53 * sqrt_info(1, 2);
  const Scalar _tmp129 = _tmp119 * _tmp128;
  const Scalar _tmp130 = _tmp103 * sqrt_info(2, 2);
  const Scalar _tmp131 = _tmp103 * sqrt_info(2, 1);
  const Scalar _tmp132 = _tmp40 * sqrt_info(2, 0);
  const Scalar _tmp133 = _tmp112 * sqrt_info(2, 2);
  const Scalar _tmp134 = _tmp119 * _tmp132;
  const Scalar _tmp135 = _tmp53 * sqrt_info(2, 2);
  const Scalar _tmp136 = -_tmp69;
  const Scalar _tmp137 = _tmp70 + _tmp71;
  const Scalar _tmp138 = _tmp136 + _tmp137 + _tmp68;
  const Scalar _tmp139 = _tmp78 + _tmp79;
  const Scalar _tmp140 = -_tmp76;
  const Scalar _tmp141 = _tmp140 + _tmp75;
  const Scalar _tmp142 = _tmp139 + _tmp141;
  const Scalar _tmp143 = -_tmp85;
  const Scalar _tmp144 = _tmp143 + _tmp83 + _tmp90;
  const Scalar _tmp145 = _tmp63 + _tmp64;
  const Scalar _tmp146 = -_tmp61;
  const Scalar _tmp147 = _tmp146 + _tmp60;
  const Scalar _tmp148 = _tmp145 + _tmp147;
  const Scalar _tmp149 = -_tmp138 * _y[3] + _tmp142 * _y[1] - _tmp144 * _y[0] + _tmp148 * _y[2];
  const Scalar _tmp150 = _tmp138 * _y[1] + _tmp142 * _y[3] + _tmp144 * _y[2] + _tmp148 * _y[0];
  const Scalar _tmp151 = -_tmp138 * _y[2] + _tmp142 * _y[0] + _tmp144 * _y[1] - _tmp148 * _y[3];
  const Scalar _tmp152 = _tmp138 * _y[0] + _tmp142 * _y[2] - _tmp144 * _y[3] - _tmp148 * _y[1];
  const Scalar _tmp153 =
      -_s_T_y[0] * _tmp149 + _s_T_y[1] * _tmp151 - _s_T_y[2] * _tmp150 + _s_T_y[3] * _tmp152;
  const Scalar _tmp154 =
      -_s_T_y[0] * _tmp150 - _s_T_y[1] * _tmp152 + _s_T_y[2] * _tmp149 + _s_T_y[3] * _tmp151;
  const Scalar _tmp155 = _tmp103 * _tmp154;
  const Scalar _tmp156 =
      _s_T_y[0] * _tmp151 + _s_T_y[1] * _tmp149 + _s_T_y[2] * _tmp152 + _s_T_y[3] * _tmp150;
  const Scalar _tmp157 = _tmp109 * _tmp156;
  const Scalar _tmp158 = _tmp157 * _tmp40;
  const Scalar _tmp159 = _tmp112 * _tmp156;
  const Scalar _tmp160 =
      _s_T_y[0] * _tmp152 - _s_T_y[1] * _tmp150 - _s_T_y[2] * _tmp151 + _s_T_y[3] * _tmp149;
  const Scalar _tmp161 = _tmp119 * _tmp156;
  const Scalar _tmp162 = _tmp103 * _tmp153;
  const Scalar _tmp163 = _tmp146 + _tmp59 + _tmp66;
  const Scalar _tmp164 = -_tmp68;
  const Scalar _tmp165 = _tmp137 + _tmp164 + _tmp69;
  const Scalar _tmp166 = _tmp140 + _tmp74 + _tmp81;
  const Scalar _tmp167 = _tmp87 + _tmp88;
  const Scalar _tmp168 = _tmp143 + _tmp84;
  const Scalar _tmp169 = _tmp167 + _tmp168;
  const Scalar _tmp170 = _tmp163 * _y[0] + _tmp165 * _y[1] - _tmp166 * _y[3] - _tmp169 * _y[2];
  const Scalar _tmp171 = _tmp163 * _y[1] - _tmp165 * _y[0] + _tmp166 * _y[2] - _tmp169 * _y[3];
  const Scalar _tmp172 = _tmp163 * _y[3] + _tmp165 * _y[2] + _tmp166 * _y[0] + _tmp169 * _y[1];
  const Scalar _tmp173 = _tmp163 * _y[2] - _tmp165 * _y[3] - _tmp166 * _y[1] + _tmp169 * _y[0];
  const Scalar _tmp174 =
      -_s_T_y[0] * _tmp171 + _s_T_y[1] * _tmp170 - _s_T_y[2] * _tmp172 + _s_T_y[3] * _tmp173;
  const Scalar _tmp175 =
      _s_T_y[0] * _tmp173 - _s_T_y[1] * _tmp172 - _s_T_y[2] * _tmp170 + _s_T_y[3] * _tmp171;
  const Scalar _tmp176 =
      -_s_T_y[0] * _tmp172 - _s_T_y[1] * _tmp173 + _s_T_y[2] * _tmp171 + _s_T_y[3] * _tmp170;
  const Scalar _tmp177 = _tmp103 * _tmp176;
  const Scalar _tmp178 =
      _s_T_y[0] * _tmp170 + _s_T_y[1] * _tmp171 + _s_T_y[2] * _tmp173 + _s_T_y[3] * _tmp172;
  const Scalar _tmp179 = _tmp119 * _tmp178;
  const Scalar _tmp180 = _tmp109 * _tmp178;
  const Scalar _tmp181 = _tmp168 + _tmp86 + _tmp89;
  const Scalar _tmp182 = _tmp181 * _y[0];
  const Scalar _tmp183 = _tmp136 + _tmp164 + _tmp72;
  const Scalar _tmp184 = -_tmp183 * _y[3];
  const Scalar _tmp185 = _tmp141 + _tmp77 + _tmp80;
  const Scalar _tmp186 = _tmp185 * _y[1];
  const Scalar _tmp187 = _tmp145 + _tmp59 + _tmp61;
  const Scalar _tmp188 = _tmp182 + _tmp184 + _tmp186 - _tmp187 * _y[2];
  const Scalar _tmp189 = _tmp181 * _y[2];
  const Scalar _tmp190 = _tmp183 * _y[1];
  const Scalar _tmp191 = _tmp185 * _y[3];
  const Scalar _tmp192 = _tmp187 * _y[0] + _tmp189 - _tmp190 - _tmp191;
  const Scalar _tmp193 = _tmp181 * _y[3];
  const Scalar _tmp194 = _tmp183 * _y[0];
  const Scalar _tmp195 = _tmp185 * _y[2] + _tmp194;
  const Scalar _tmp196 = _tmp187 * _y[1] + _tmp193 + _tmp195;
  const Scalar _tmp197 = _tmp185 * _y[0];
  const Scalar _tmp198 = _tmp183 * _y[2];
  const Scalar _tmp199 = _tmp181 * _y[1] + _tmp198;
  const Scalar _tmp200 = -_tmp187 * _y[3] - _tmp197 + _tmp199;
  const Scalar _tmp201 =
      -_s_T_y[0] * _tmp200 + _s_T_y[1] * _tmp188 - _s_T_y[2] * _tmp196 + _s_T_y[3] * _tmp192;
  const Scalar _tmp202 =
      _s_T_y[0] * _tmp188 + _s_T_y[1] * _tmp200 + _s_T_y[2] * _tmp192 + _s_T_y[3] * _tmp196;
  const Scalar _tmp203 = _tmp119 * _tmp202;
  const Scalar _tmp204 = _tmp109 * _tmp202;
  const Scalar _tmp205 =
      _s_T_y[0] * _tmp192 - _s_T_y[1] * _tmp196 - _s_T_y[2] * _tmp188 + _s_T_y[3] * _tmp200;
  const Scalar _tmp206 = _tmp103 * (-_s_T_y[0] * _tmp196 - _s_T_y[1] * _tmp192 +
                                    _s_T_y[2] * _tmp200 + _s_T_y[3] * _tmp188);
  const Scalar _tmp207 = _tmp103 * _tmp201;
  const Scalar _tmp208 = _tmp147 + _tmp62 + _tmp65;
  const Scalar _tmp209 = _tmp208 * _y[3];
  const Scalar _tmp210 = _tmp167 + _tmp83 + _tmp85;
  const Scalar _tmp211 = _tmp197 - _tmp198 - _tmp209 + _tmp210 * _y[1];
  const Scalar _tmp212 = _tmp208 * _y[1];
  const Scalar _tmp213 = _tmp195 - _tmp210 * _y[3] - _tmp212;
  const Scalar _tmp214 = _tmp190 + _tmp208 * _y[0];
  const Scalar _tmp215 = _tmp191 + _tmp210 * _y[2] + _tmp214;
  const Scalar _tmp216 = _tmp184 + _tmp208 * _y[2];
  const Scalar _tmp217 = _tmp186 - _tmp210 * _y[0] + _tmp216;
  const Scalar _tmp218 =
      _s_T_y[0] * _tmp211 + _s_T_y[1] * _tmp217 + _s_T_y[2] * _tmp213 + _s_T_y[3] * _tmp215;
  const Scalar _tmp219 = _tmp109 * _tmp218;
  const Scalar _tmp220 = _tmp119 * _tmp218;
  const Scalar _tmp221 =
      _s_T_y[0] * _tmp213 - _s_T_y[1] * _tmp215 - _s_T_y[2] * _tmp211 + _s_T_y[3] * _tmp217;
  const Scalar _tmp222 = _tmp103 * (-_s_T_y[0] * _tmp215 - _s_T_y[1] * _tmp213 +
                                    _s_T_y[2] * _tmp217 + _s_T_y[3] * _tmp211);
  const Scalar _tmp223 =
      -_s_T_y[0] * _tmp217 + _s_T_y[1] * _tmp211 - _s_T_y[2] * _tmp215 + _s_T_y[3] * _tmp213;
  const Scalar _tmp224 = _tmp139 + _tmp74 + _tmp76;
  const Scalar _tmp225 = _tmp182 + _tmp216 - _tmp224 * _y[1];
  const Scalar _tmp226 = -_tmp189 + _tmp214 - _tmp224 * _y[3];
  const Scalar _tmp227 = _tmp199 + _tmp209 + _tmp224 * _y[0];
  const Scalar _tmp228 = -_tmp193 - _tmp194 + _tmp212 + _tmp224 * _y[2];
  const Scalar _tmp229 =
      _s_T_y[0] * _tmp226 + _s_T_y[1] * _tmp228 + _s_T_y[2] * _tmp225 + _s_T_y[3] * _tmp227;
  const Scalar _tmp230 = _tmp109 * _tmp229;
  const Scalar _tmp231 = _tmp119 * _tmp229;
  const Scalar _tmp232 =
      _s_T_y[0] * _tmp225 - _s_T_y[1] * _tmp227 - _s_T_y[2] * _tmp226 + _s_T_y[3] * _tmp228;
  const Scalar _tmp233 =
      -_s_T_y[0] * _tmp227 - _s_T_y[1] * _tmp225 + _s_T_y[2] * _tmp228 + _s_T_y[3] * _tmp226;
  const Scalar _tmp234 = _tmp103 * _tmp233;
  const Scalar _tmp235 =
      -_s_T_y[0] * _tmp228 + _s_T_y[1] * _tmp226 - _s_T_y[2] * _tmp227 + _s_T_y[3] * _tmp225;
  const Scalar _tmp236 = (Scalar(1) / Scalar(2)) * _tmp30;
  const Scalar _tmp237 = (Scalar(1) / Scalar(2)) * _tmp31;
  const Scalar _tmp238 = (Scalar(1) / Scalar(2)) * _tmp32;
  const Scalar _tmp239 = (Scalar(1) / Scalar(2)) * _tmp33;
  const Scalar _tmp240 = _tmp236 + _tmp237 - _tmp238 - _tmp239;
  const Scalar _tmp241 = _s_T_y[2] * _tmp240;
  const Scalar _tmp242 = (Scalar(1) / Scalar(2)) * _tmp5;
  const Scalar _tmp243 = (Scalar(1) / Scalar(2)) * _tmp11;
  const Scalar _tmp244 = (Scalar(1) / Scalar(2)) * _tmp17;
  const Scalar _tmp245 = (Scalar(1) / Scalar(2)) * _tmp23;
  const Scalar _tmp246 = -_tmp242 + _tmp243 - _tmp244 + _tmp245;
  const Scalar _tmp247 = (Scalar(1) / Scalar(2)) * _tmp25;
  const Scalar _tmp248 = (Scalar(1) / Scalar(2)) * _tmp26;
  const Scalar _tmp249 = (Scalar(1) / Scalar(2)) * _tmp27;
  const Scalar _tmp250 = (Scalar(1) / Scalar(2)) * _tmp28;
  const Scalar _tmp251 = -_tmp247 + _tmp248 + _tmp249 - _tmp250;
  const Scalar _tmp252 = (Scalar(1) / Scalar(2)) * _tmp35 + (Scalar(1) / Scalar(2)) * _tmp36 +
                         (Scalar(1) / Scalar(2)) * _tmp37 + (Scalar(1) / Scalar(2)) * _tmp38;
  const Scalar _tmp253 = _s_T_y[0] * _tmp252;
  const Scalar _tmp254 = _s_T_y[3] * _tmp251 + _tmp253;
  const Scalar _tmp255 = _s_T_y[1] * _tmp246 + _tmp241 + _tmp254;
  const Scalar _tmp256 = _tmp109 * _tmp255;
  const Scalar _tmp257 = -_s_T_y[1] * _tmp240;
  const Scalar _tmp258 = -_s_T_y[0] * _tmp251;
  const Scalar _tmp259 = _s_T_y[3] * _tmp252;
  const Scalar _tmp260 = _s_T_y[2] * _tmp246 + _tmp257 + _tmp258 + _tmp259;
  const Scalar _tmp261 = _tmp103 * _tmp260;
  const Scalar _tmp262 = _s_T_y[2] * _tmp251;
  const Scalar _tmp263 = _s_T_y[1] * _tmp252;
  const Scalar _tmp264 = _s_T_y[3] * _tmp240 + _tmp263;
  const Scalar _tmp265 = -_s_T_y[0] * _tmp246 - _tmp262 + _tmp264;
  const Scalar _tmp266 = _s_T_y[0] * _tmp240;
  const Scalar _tmp267 = _s_T_y[1] * _tmp251;
  const Scalar _tmp268 = _s_T_y[2] * _tmp252;
  const Scalar _tmp269 = _s_T_y[3] * _tmp246 + _tmp266 - _tmp267 - _tmp268;
  const Scalar _tmp270 = _tmp119 * _tmp255;
  const Scalar _tmp271 = _tmp270 * _tmp53;
  const Scalar _tmp272 = _tmp103 * _tmp265;
  const Scalar _tmp273 = _tmp242 - _tmp243 + _tmp244 - _tmp245;
  const Scalar _tmp274 = _s_T_y[0] * _tmp273;
  const Scalar _tmp275 = _tmp247 - _tmp248 - _tmp249 + _tmp250;
  const Scalar _tmp276 = _s_T_y[2] * _tmp275 + _tmp264 + _tmp274;
  const Scalar _tmp277 = _tmp109 * _tmp276;
  const Scalar _tmp278 = _s_T_y[1] * _tmp273;
  const Scalar _tmp279 = _s_T_y[3] * _tmp275 - _tmp241 - _tmp253 + _tmp278;
  const Scalar _tmp280 = -_s_T_y[2] * _tmp273 + _tmp259;
  const Scalar _tmp281 = _s_T_y[0] * _tmp275 + _tmp257 + _tmp280;
  const Scalar _tmp282 = _s_T_y[3] * _tmp273 + _tmp268;
  const Scalar _tmp283 = -_s_T_y[1] * _tmp275 - _tmp266 + _tmp282;
  const Scalar _tmp284 = _tmp103 * _tmp283;
  const Scalar _tmp285 = _tmp119 * _tmp276;
  const Scalar _tmp286 = -_tmp236 - _tmp237 + _tmp238 + _tmp239;
  const Scalar _tmp287 = -_s_T_y[2] * _tmp286 + _tmp254 - _tmp278;
  const Scalar _tmp288 = _s_T_y[0] * _tmp286 + _tmp267 + _tmp282;
  const Scalar _tmp289 = _tmp109 * _tmp288;
  const Scalar _tmp290 = _s_T_y[1] * _tmp286 + _tmp258 + _tmp280;
  const Scalar _tmp291 = _s_T_y[3] * _tmp286 + _tmp262 - _tmp263 - _tmp274;
  const Scalar _tmp292 = _tmp103 * _tmp291;
  const Scalar _tmp293 = _tmp119 * _tmp288;
  const Scalar _tmp294 = _tmp103 * _tmp287;

  // Output terms (4)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp50 * _tmp55 * _tmp56 + _tmp52 * sqrt_info(0, 0) + _tmp54 * sqrt_info(0, 2);
  _res(1, 0) = _tmp51 * _tmp57 + _tmp52 * sqrt_info(1, 0) + _tmp54 * sqrt_info(1, 2);
  _res(2, 0) = _tmp51 * _tmp58 + _tmp52 * sqrt_info(2, 0) + _tmp54 * sqrt_info(2, 2);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 6>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp104 * _tmp96 + _tmp105 * _tmp106 - _tmp107 * _tmp111 - _tmp107 * _tmp113 -
                     _tmp114 * _tmp115 + _tmp114 * _tmp120 + _tmp117 * sqrt_info(0, 0) +
                     _tmp118 * _tmp120 + _tmp120 * _tmp121;
    _res_D_x(1, 0) = _tmp105 * _tmp123 - _tmp107 * _tmp124 - _tmp107 * _tmp125 + _tmp107 * _tmp129 -
                     _tmp115 * _tmp57 + _tmp116 * _tmp126 + _tmp120 * _tmp127 + _tmp120 * _tmp57 +
                     _tmp122 * _tmp96;
    _res_D_x(2, 0) = _tmp105 * _tmp131 - _tmp107 * _tmp133 + _tmp107 * _tmp134 - _tmp115 * _tmp132 -
                     _tmp115 * _tmp58 + _tmp117 * sqrt_info(2, 0) + _tmp120 * _tmp135 +
                     _tmp120 * _tmp58 + _tmp130 * _tmp96;
    _res_D_x(0, 1) = _tmp104 * _tmp153 + _tmp106 * _tmp160 - _tmp114 * _tmp157 + _tmp114 * _tmp161 +
                     _tmp118 * _tmp161 + _tmp121 * _tmp161 + _tmp155 * sqrt_info(0, 0) -
                     _tmp158 * sqrt_info(0, 0) - _tmp159 * sqrt_info(0, 2);
    _res_D_x(1, 1) = _tmp123 * _tmp160 - _tmp125 * _tmp156 + _tmp126 * _tmp154 + _tmp127 * _tmp161 +
                     _tmp128 * _tmp161 - _tmp157 * _tmp57 - _tmp158 * sqrt_info(1, 0) +
                     _tmp161 * _tmp57 + _tmp162 * sqrt_info(1, 2);
    _res_D_x(2, 1) = _tmp131 * _tmp160 - _tmp132 * _tmp157 + _tmp134 * _tmp156 + _tmp135 * _tmp161 +
                     _tmp155 * sqrt_info(2, 0) - _tmp157 * _tmp58 - _tmp159 * sqrt_info(2, 2) +
                     _tmp161 * _tmp58 + _tmp162 * sqrt_info(2, 2);
    _res_D_x(0, 2) = _tmp104 * _tmp174 + _tmp106 * _tmp175 - _tmp111 * _tmp178 - _tmp113 * _tmp178 +
                     _tmp114 * _tmp179 - _tmp114 * _tmp180 + _tmp118 * _tmp179 + _tmp121 * _tmp179 +
                     _tmp177 * sqrt_info(0, 0);
    _res_D_x(1, 2) = _tmp122 * _tmp174 + _tmp123 * _tmp175 - _tmp124 * _tmp178 - _tmp125 * _tmp178 +
                     _tmp126 * _tmp176 + _tmp127 * _tmp179 + _tmp128 * _tmp179 + _tmp179 * _tmp57 -
                     _tmp180 * _tmp57;
    _res_D_x(2, 2) = _tmp130 * _tmp174 + _tmp131 * _tmp175 - _tmp132 * _tmp180 - _tmp133 * _tmp178 +
                     _tmp134 * _tmp178 + _tmp135 * _tmp179 + _tmp177 * sqrt_info(2, 0) +
                     _tmp179 * _tmp58 - _tmp180 * _tmp58;
    _res_D_x(0, 3) = 0;
    _res_D_x(1, 3) = 0;
    _res_D_x(2, 3) = 0;
    _res_D_x(0, 4) = 0;
    _res_D_x(1, 4) = 0;
    _res_D_x(2, 4) = 0;
    _res_D_x(0, 5) = 0;
    _res_D_x(1, 5) = 0;
    _res_D_x(2, 5) = 0;
  }

  if (res_D_x_T_s != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 6>> _res_D_x_T_s{res_D_x_T_s};

    _res_D_x_T_s(0, 0) = _tmp104 * _tmp201 + _tmp106 * _tmp205 - _tmp111 * _tmp202 -
                         _tmp113 * _tmp202 + _tmp114 * _tmp203 - _tmp114 * _tmp204 +
                         _tmp118 * _tmp203 + _tmp121 * _tmp203 + _tmp206 * sqrt_info(0, 0);
    _res_D_x_T_s(1, 0) = _tmp123 * _tmp205 - _tmp124 * _tmp202 - _tmp125 * _tmp202 +
                         _tmp127 * _tmp203 + _tmp129 * _tmp202 + _tmp203 * _tmp57 -
                         _tmp204 * _tmp57 + _tmp206 * sqrt_info(1, 0) + _tmp207 * sqrt_info(1, 2);
    _res_D_x_T_s(2, 0) = _tmp131 * _tmp205 - _tmp132 * _tmp204 - _tmp133 * _tmp202 +
                         _tmp134 * _tmp202 + _tmp135 * _tmp203 + _tmp203 * _tmp58 -
                         _tmp204 * _tmp58 + _tmp206 * sqrt_info(2, 0) + _tmp207 * sqrt_info(2, 2);
    _res_D_x_T_s(0, 1) = _tmp104 * _tmp223 + _tmp106 * _tmp221 - _tmp111 * _tmp218 -
                         _tmp113 * _tmp218 - _tmp114 * _tmp219 + _tmp114 * _tmp220 +
                         _tmp118 * _tmp220 + _tmp121 * _tmp220 + _tmp222 * sqrt_info(0, 0);
    _res_D_x_T_s(1, 1) = _tmp122 * _tmp223 + _tmp123 * _tmp221 - _tmp124 * _tmp218 -
                         _tmp125 * _tmp218 + _tmp127 * _tmp220 + _tmp128 * _tmp220 -
                         _tmp219 * _tmp57 + _tmp220 * _tmp57 + _tmp222 * sqrt_info(1, 0);
    _res_D_x_T_s(2, 1) = _tmp130 * _tmp223 + _tmp131 * _tmp221 - _tmp132 * _tmp219 +
                         _tmp132 * _tmp220 - _tmp133 * _tmp218 + _tmp135 * _tmp220 -
                         _tmp219 * _tmp58 + _tmp220 * _tmp58 + _tmp222 * sqrt_info(2, 0);
    _res_D_x_T_s(0, 2) = _tmp104 * _tmp235 + _tmp106 * _tmp232 - _tmp111 * _tmp229 -
                         _tmp113 * _tmp229 - _tmp114 * _tmp230 + _tmp114 * _tmp231 +
                         _tmp118 * _tmp231 + _tmp121 * _tmp231 + _tmp234 * sqrt_info(0, 0);
    _res_D_x_T_s(1, 2) = _tmp122 * _tmp235 + _tmp123 * _tmp232 - _tmp124 * _tmp229 -
                         _tmp125 * _tmp229 + _tmp126 * _tmp233 + _tmp127 * _tmp231 +
                         _tmp129 * _tmp229 - _tmp230 * _tmp57 + _tmp231 * _tmp57;
    _res_D_x_T_s(2, 2) = _tmp130 * _tmp235 + _tmp131 * _tmp232 - _tmp132 * _tmp230 -
                         _tmp133 * _tmp229 + _tmp134 * _tmp229 + _tmp135 * _tmp231 -
                         _tmp230 * _tmp58 + _tmp231 * _tmp58 + _tmp234 * sqrt_info(2, 0);
    _res_D_x_T_s(0, 3) = 0;
    _res_D_x_T_s(1, 3) = 0;
    _res_D_x_T_s(2, 3) = 0;
    _res_D_x_T_s(0, 4) = 0;
    _res_D_x_T_s(1, 4) = 0;
    _res_D_x_T_s(2, 4) = 0;
    _res_D_x_T_s(0, 5) = 0;
    _res_D_x_T_s(1, 5) = 0;
    _res_D_x_T_s(2, 5) = 0;
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 6>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = _tmp104 * _tmp265 + _tmp106 * _tmp269 - _tmp111 * _tmp255 - _tmp113 * _tmp255 -
                     _tmp114 * _tmp256 + _tmp114 * _tmp270 + _tmp118 * _tmp270 +
                     _tmp261 * sqrt_info(0, 0) + _tmp271 * sqrt_info(0, 2);
    _res_D_y(1, 0) = _tmp123 * _tmp269 - _tmp124 * _tmp255 - _tmp125 * _tmp255 + _tmp126 * _tmp260 +
                     _tmp127 * _tmp270 + _tmp128 * _tmp270 - _tmp256 * _tmp57 + _tmp270 * _tmp57 +
                     _tmp272 * sqrt_info(1, 2);
    _res_D_y(2, 0) = _tmp131 * _tmp269 - _tmp132 * _tmp256 + _tmp132 * _tmp270 - _tmp133 * _tmp255 -
                     _tmp256 * _tmp58 + _tmp261 * sqrt_info(2, 0) + _tmp270 * _tmp58 +
                     _tmp271 * sqrt_info(2, 2) + _tmp272 * sqrt_info(2, 2);
    _res_D_y(0, 1) = _tmp104 * _tmp279 + _tmp106 * _tmp281 - _tmp111 * _tmp276 - _tmp113 * _tmp276 -
                     _tmp114 * _tmp277 + _tmp114 * _tmp285 + _tmp118 * _tmp285 + _tmp121 * _tmp285 +
                     _tmp284 * sqrt_info(0, 0);
    _res_D_y(1, 1) = _tmp122 * _tmp279 + _tmp123 * _tmp281 - _tmp124 * _tmp276 - _tmp125 * _tmp276 +
                     _tmp126 * _tmp283 + _tmp127 * _tmp285 + _tmp129 * _tmp276 - _tmp277 * _tmp57 +
                     _tmp285 * _tmp57;
    _res_D_y(2, 1) = _tmp130 * _tmp279 + _tmp131 * _tmp281 - _tmp132 * _tmp277 - _tmp133 * _tmp276 +
                     _tmp134 * _tmp276 + _tmp135 * _tmp285 - _tmp277 * _tmp58 +
                     _tmp284 * sqrt_info(2, 0) + _tmp285 * _tmp58;
    _res_D_y(0, 2) = _tmp104 * _tmp290 + _tmp106 * _tmp287 - _tmp111 * _tmp288 - _tmp113 * _tmp288 -
                     _tmp114 * _tmp289 + _tmp114 * _tmp293 + _tmp118 * _tmp293 + _tmp121 * _tmp293 +
                     _tmp292 * sqrt_info(0, 0);
    _res_D_y(1, 2) = _tmp122 * _tmp290 - _tmp124 * _tmp288 - _tmp125 * _tmp288 + _tmp126 * _tmp291 +
                     _tmp127 * _tmp293 + _tmp128 * _tmp293 - _tmp289 * _tmp57 + _tmp293 * _tmp57 +
                     _tmp294 * sqrt_info(1, 1);
    _res_D_y(2, 2) = _tmp130 * _tmp290 - _tmp132 * _tmp289 + _tmp132 * _tmp293 - _tmp133 * _tmp288 +
                     _tmp135 * _tmp293 - _tmp289 * _tmp58 + _tmp292 * sqrt_info(2, 0) +
                     _tmp293 * _tmp58 + _tmp294 * sqrt_info(2, 1);
    _res_D_y(0, 3) = 0;
    _res_D_y(1, 3) = 0;
    _res_D_y(2, 3) = 0;
    _res_D_y(0, 4) = 0;
    _res_D_y(1, 4) = 0;
    _res_D_y(2, 4) = 0;
    _res_D_y(0, 5) = 0;
    _res_D_y(1, 5) = 0;
    _res_D_y(2, 5) = 0;
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
