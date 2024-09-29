// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose3.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose3_between_factor
 *
 * Args:
 *     x: Pose3
 *     x_T_y: Pose3
 *     y: Pose3
 *     sqrt_info: Matrix66
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix61
 *     res_D_x: (6x6) jacobian of res (6) wrt arg x (6)
 *     res_D_y: (6x6) jacobian of res (6) wrt arg y (6)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Pose3BetweenFactorWithJacobians02(
    const sym::Pose3<Scalar>& x, const sym::Pose3<Scalar>& x_T_y, const sym::Pose3<Scalar>& y,
    const Eigen::Matrix<Scalar, 6, 6>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_y = nullptr) {
  // Total ops: 1403

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x_T_y = x_T_y.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (296)
  const Scalar _tmp0 = _x[2] * _y[2];
  const Scalar _tmp1 = _x[1] * _y[1];
  const Scalar _tmp2 = _x[0] * _y[0];
  const Scalar _tmp3 = _x[3] * _y[3];
  const Scalar _tmp4 = _tmp0 + _tmp1 + _tmp2 + _tmp3;
  const Scalar _tmp5 = _x[3] * _y[2];
  const Scalar _tmp6 = _x[2] * _y[3];
  const Scalar _tmp7 = _x[1] * _y[0];
  const Scalar _tmp8 = _x[0] * _y[1];
  const Scalar _tmp9 = _tmp5 - _tmp6 + _tmp7 - _tmp8;
  const Scalar _tmp10 = _x[3] * _y[0];
  const Scalar _tmp11 = _x[2] * _y[1];
  const Scalar _tmp12 = _x[1] * _y[2];
  const Scalar _tmp13 = _x[0] * _y[3];
  const Scalar _tmp14 = _tmp10 + _tmp11 - _tmp12 - _tmp13;
  const Scalar _tmp15 = _x[3] * _y[1];
  const Scalar _tmp16 = _x[2] * _y[0];
  const Scalar _tmp17 = _x[1] * _y[3];
  const Scalar _tmp18 = _x[0] * _y[2];
  const Scalar _tmp19 = _tmp15 - _tmp16 - _tmp17 + _tmp18;
  const Scalar _tmp20 =
      _tmp14 * _x_T_y[3] + _tmp19 * _x_T_y[2] - _tmp4 * _x_T_y[0] - _tmp9 * _x_T_y[1];
  const Scalar _tmp21 = _tmp9 * _x_T_y[2];
  const Scalar _tmp22 = _tmp14 * _x_T_y[0];
  const Scalar _tmp23 = _tmp19 * _x_T_y[1];
  const Scalar _tmp24 = -_tmp21 - _tmp22 - _tmp23;
  const Scalar _tmp25 = _tmp4 * _x_T_y[3];
  const Scalar _tmp26 =
      2 * std::min<Scalar>(0, (((-_tmp24 + _tmp25) > 0) - ((-_tmp24 + _tmp25) < 0))) + 1;
  const Scalar _tmp27 = 2 * _tmp26;
  const Scalar _tmp28 = 1 - epsilon;
  const Scalar _tmp29 = std::min<Scalar>(_tmp28, std::fabs(_tmp24 - _tmp25));
  const Scalar _tmp30 = std::acos(_tmp29) / std::sqrt(Scalar(1 - std::pow(_tmp29, Scalar(2))));
  const Scalar _tmp31 = _tmp27 * _tmp30;
  const Scalar _tmp32 = _tmp20 * _tmp31;
  const Scalar _tmp33 = std::pow(_x[2], Scalar(2));
  const Scalar _tmp34 = 2 * _tmp33;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 = std::pow(_x[0], Scalar(2));
  const Scalar _tmp37 = 2 * _tmp36;
  const Scalar _tmp38 = 1 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = 2 * _x[0];
  const Scalar _tmp41 = _tmp40 * _x[1];
  const Scalar _tmp42 = 2 * _x[3];
  const Scalar _tmp43 = _tmp42 * _x[2];
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = _tmp41 + _tmp44;
  const Scalar _tmp46 = _tmp45 * _x[4];
  const Scalar _tmp47 = _tmp40 * _x[3];
  const Scalar _tmp48 = 2 * _x[1] * _x[2];
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = _tmp49 * _x[6];
  const Scalar _tmp51 = _tmp45 * _y[4] + _tmp49 * _y[6];
  const Scalar _tmp52 = -_tmp39 * _x[5] + _tmp39 * _y[5] - _tmp46 - _tmp50 + _tmp51 - _x_T_y[5];
  const Scalar _tmp53 =
      -_tmp14 * _x_T_y[2] + _tmp19 * _x_T_y[3] - _tmp4 * _x_T_y[1] + _tmp9 * _x_T_y[0];
  const Scalar _tmp54 = _tmp53 * sqrt_info(0, 1);
  const Scalar _tmp55 = std::pow(_x[1], Scalar(2));
  const Scalar _tmp56 = 2 * _tmp55;
  const Scalar _tmp57 = -_tmp56;
  const Scalar _tmp58 = _tmp38 + _tmp57;
  const Scalar _tmp59 = _tmp40 * _x[2];
  const Scalar _tmp60 = _tmp42 * _x[1];
  const Scalar _tmp61 = _tmp59 + _tmp60;
  const Scalar _tmp62 = _tmp61 * _x[4];
  const Scalar _tmp63 = -_tmp47;
  const Scalar _tmp64 = _tmp48 + _tmp63;
  const Scalar _tmp65 = _tmp64 * _x[5];
  const Scalar _tmp66 = _tmp61 * _y[4] + _tmp64 * _y[5];
  const Scalar _tmp67 = -_tmp58 * _x[6] + _tmp58 * _y[6] - _tmp62 - _tmp65 + _tmp66 - _x_T_y[6];
  const Scalar _tmp68 = _tmp35 + _tmp57 + 1;
  const Scalar _tmp69 = _tmp41 + _tmp43;
  const Scalar _tmp70 = _tmp69 * _x[5];
  const Scalar _tmp71 = -_tmp60;
  const Scalar _tmp72 = _tmp59 + _tmp71;
  const Scalar _tmp73 = _tmp72 * _x[6];
  const Scalar _tmp74 = _tmp69 * _y[5] + _tmp72 * _y[6];
  const Scalar _tmp75 = -_tmp68 * _x[4] + _tmp68 * _y[4] - _tmp70 - _tmp73 + _tmp74 - _x_T_y[4];
  const Scalar _tmp76 =
      _tmp14 * _x_T_y[1] - _tmp19 * _x_T_y[0] - _tmp4 * _x_T_y[2] + _tmp9 * _x_T_y[3];
  const Scalar _tmp77 = _tmp31 * _tmp76;
  const Scalar _tmp78 = _tmp31 * _tmp53;
  const Scalar _tmp79 = _tmp27 * sqrt_info(2, 1);
  const Scalar _tmp80 = _tmp30 * _tmp53;
  const Scalar _tmp81 = _tmp27 * sqrt_info(5, 1);
  const Scalar _tmp82 = (Scalar(1) / Scalar(2)) * _tmp10;
  const Scalar _tmp83 = (Scalar(1) / Scalar(2)) * _tmp11;
  const Scalar _tmp84 = (Scalar(1) / Scalar(2)) * _tmp12;
  const Scalar _tmp85 = (Scalar(1) / Scalar(2)) * _tmp13;
  const Scalar _tmp86 = _tmp82 + _tmp83 - _tmp84 - _tmp85;
  const Scalar _tmp87 = -_tmp86 * _x_T_y[1];
  const Scalar _tmp88 = (Scalar(1) / Scalar(2)) * _tmp3;
  const Scalar _tmp89 = (Scalar(1) / Scalar(2)) * _tmp0;
  const Scalar _tmp90 = (Scalar(1) / Scalar(2)) * _tmp1;
  const Scalar _tmp91 = (Scalar(1) / Scalar(2)) * _tmp2;
  const Scalar _tmp92 = -_tmp88 - _tmp89 - _tmp90 - _tmp91;
  const Scalar _tmp93 = _tmp92 * _x_T_y[2];
  const Scalar _tmp94 = (Scalar(1) / Scalar(2)) * _tmp5;
  const Scalar _tmp95 = (Scalar(1) / Scalar(2)) * _tmp6;
  const Scalar _tmp96 = (Scalar(1) / Scalar(2)) * _tmp7;
  const Scalar _tmp97 = (Scalar(1) / Scalar(2)) * _tmp8;
  const Scalar _tmp98 = _tmp94 - _tmp95 + _tmp96 - _tmp97;
  const Scalar _tmp99 = _tmp98 * _x_T_y[3];
  const Scalar _tmp100 = (Scalar(1) / Scalar(2)) * _tmp15;
  const Scalar _tmp101 = (Scalar(1) / Scalar(2)) * _tmp16;
  const Scalar _tmp102 = (Scalar(1) / Scalar(2)) * _tmp17;
  const Scalar _tmp103 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp104 = -_tmp100 + _tmp101 + _tmp102 - _tmp103;
  const Scalar _tmp105 = _tmp104 * _x_T_y[0];
  const Scalar _tmp106 = _tmp105 + _tmp99;
  const Scalar _tmp107 = _tmp21 + _tmp22 + _tmp23 + _tmp25;
  const Scalar _tmp108 = std::fabs(_tmp107);
  const Scalar _tmp109 = std::min<Scalar>(_tmp108, _tmp28);
  const Scalar _tmp110 = std::acos(_tmp109);
  const Scalar _tmp111 = 1 - std::pow(_tmp109, Scalar(2));
  const Scalar _tmp112 = _tmp110 / std::sqrt(_tmp111);
  const Scalar _tmp113 = _tmp112 * (_tmp106 + _tmp87 - _tmp93);
  const Scalar _tmp114 = _tmp113 * _tmp27;
  const Scalar _tmp115 = _tmp86 * _x_T_y[3];
  const Scalar _tmp116 = _tmp92 * _x_T_y[0];
  const Scalar _tmp117 = _tmp98 * _x_T_y[1];
  const Scalar _tmp118 = _tmp104 * _x_T_y[2];
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = _tmp115 + _tmp116 + _tmp119;
  const Scalar _tmp121 = _tmp26 * ((((-_tmp108 + _tmp28) > 0) - ((-_tmp108 + _tmp28) < 0)) + 1) *
                         (((_tmp107) > 0) - ((_tmp107) < 0));
  const Scalar _tmp122 = _tmp109 * _tmp110 * _tmp121 / (_tmp111 * std::sqrt(_tmp111));
  const Scalar _tmp123 = _tmp122 * _tmp76;
  const Scalar _tmp124 = _tmp120 * _tmp123;
  const Scalar _tmp125 = _tmp121 / _tmp111;
  const Scalar _tmp126 = _tmp125 * _tmp76;
  const Scalar _tmp127 = _tmp120 * _tmp126;
  const Scalar _tmp128 = _tmp125 * _tmp20;
  const Scalar _tmp129 = _tmp120 * _tmp128;
  const Scalar _tmp130 = _tmp92 * _x_T_y[3];
  const Scalar _tmp131 = _tmp86 * _x_T_y[0];
  const Scalar _tmp132 = _tmp98 * _x_T_y[2];
  const Scalar _tmp133 = -_tmp104 * _x_T_y[1];
  const Scalar _tmp134 = _tmp132 + _tmp133;
  const Scalar _tmp135 = _tmp130 - _tmp131 + _tmp134;
  const Scalar _tmp136 = _tmp112 * _tmp27;
  const Scalar _tmp137 = _tmp135 * _tmp136;
  const Scalar _tmp138 = _tmp120 * _tmp125;
  const Scalar _tmp139 = _tmp92 * _x_T_y[1];
  const Scalar _tmp140 = _tmp86 * _x_T_y[2];
  const Scalar _tmp141 = -_tmp98 * _x_T_y[0];
  const Scalar _tmp142 = _tmp104 * _x_T_y[3];
  const Scalar _tmp143 = _tmp136 * (_tmp139 - _tmp140 + _tmp141 + _tmp142);
  const Scalar _tmp144 = _tmp122 * _tmp20;
  const Scalar _tmp145 = _tmp120 * _tmp144;
  const Scalar _tmp146 = _tmp122 * _tmp54;
  const Scalar _tmp147 = -_tmp41;
  const Scalar _tmp148 = _tmp147 + _tmp43;
  const Scalar _tmp149 = -_tmp55;
  const Scalar _tmp150 = _tmp149 + _tmp33;
  const Scalar _tmp151 = std::pow(_x[3], Scalar(2));
  const Scalar _tmp152 = -_tmp151;
  const Scalar _tmp153 = _tmp152 + _tmp36;
  const Scalar _tmp154 = _tmp150 + _tmp153;
  const Scalar _tmp155 = -_tmp48;
  const Scalar _tmp156 = _tmp155 + _tmp63;
  const Scalar _tmp157 = -_tmp148 * _x[4] + _tmp148 * _y[4] - _tmp154 * _x[5] + _tmp154 * _y[5] -
                         _tmp156 * _x[6] + _tmp156 * _y[6];
  const Scalar _tmp158 = -_tmp36;
  const Scalar _tmp159 = _tmp151 + _tmp158;
  const Scalar _tmp160 = _tmp150 + _tmp159;
  const Scalar _tmp161 = -_tmp160 * _x[6] + _tmp160 * _y[6] - _tmp62 - _tmp65 + _tmp66;
  const Scalar _tmp162 = _tmp125 * _tmp53;
  const Scalar _tmp163 = _tmp120 * _tmp162;
  const Scalar _tmp164 = _tmp122 * _tmp53;
  const Scalar _tmp165 = _tmp164 * sqrt_info(1, 1);
  const Scalar _tmp166 = _tmp53 * sqrt_info(2, 1);
  const Scalar _tmp167 = _tmp122 * _tmp166;
  const Scalar _tmp168 = _tmp162 * sqrt_info(3, 1);
  const Scalar _tmp169 = _tmp164 * sqrt_info(3, 1);
  const Scalar _tmp170 = _tmp126 * sqrt_info(4, 2);
  const Scalar _tmp171 = _tmp136 * sqrt_info(4, 0);
  const Scalar _tmp172 = _tmp164 * sqrt_info(4, 1);
  const Scalar _tmp173 = _tmp126 * sqrt_info(5, 2);
  const Scalar _tmp174 = _tmp164 * sqrt_info(5, 1);
  const Scalar _tmp175 = _tmp100 - _tmp101 - _tmp102 + _tmp103;
  const Scalar _tmp176 = -_tmp175 * _x_T_y[2];
  const Scalar _tmp177 = -_tmp94 + _tmp95 - _tmp96 + _tmp97;
  const Scalar _tmp178 = _tmp177 * _x_T_y[1];
  const Scalar _tmp179 = _tmp115 + _tmp178;
  const Scalar _tmp180 = -_tmp116 + _tmp176 + _tmp179;
  const Scalar _tmp181 = _tmp136 * sqrt_info(0, 2);
  const Scalar _tmp182 = _tmp175 * _x_T_y[0];
  const Scalar _tmp183 = _tmp177 * _x_T_y[3];
  const Scalar _tmp184 = _tmp183 + _tmp87;
  const Scalar _tmp185 = -_tmp182 + _tmp184 + _tmp93;
  const Scalar _tmp186 = _tmp136 * _tmp185;
  const Scalar _tmp187 = _tmp175 * _x_T_y[3];
  const Scalar _tmp188 = _tmp177 * _x_T_y[0];
  const Scalar _tmp189 = _tmp140 + _tmp188;
  const Scalar _tmp190 = _tmp139 + _tmp187 + _tmp189;
  const Scalar _tmp191 = _tmp123 * _tmp190;
  const Scalar _tmp192 = _tmp126 * _tmp190;
  const Scalar _tmp193 = _tmp144 * _tmp190;
  const Scalar _tmp194 = _tmp125 * _tmp190;
  const Scalar _tmp195 = _tmp175 * _x_T_y[1];
  const Scalar _tmp196 = -_tmp177 * _x_T_y[2];
  const Scalar _tmp197 = _tmp131 + _tmp196;
  const Scalar _tmp198 = _tmp130 - _tmp195 + _tmp197;
  const Scalar _tmp199 = _tmp136 * _tmp198;
  const Scalar _tmp200 = _tmp128 * _tmp190;
  const Scalar _tmp201 = -_tmp59;
  const Scalar _tmp202 = _tmp201 + _tmp71;
  const Scalar _tmp203 = -_tmp33;
  const Scalar _tmp204 = _tmp203 + _tmp55;
  const Scalar _tmp205 = _tmp153 + _tmp204;
  const Scalar _tmp206 = _tmp155 + _tmp47;
  const Scalar _tmp207 = -_tmp202 * _x[4] + _tmp202 * _y[4] - _tmp205 * _x[6] + _tmp205 * _y[6] -
                         _tmp206 * _x[5] + _tmp206 * _y[5];
  const Scalar _tmp208 = _tmp149 + _tmp151 + _tmp203 + _tmp36;
  const Scalar _tmp209 = -_tmp208 * _x[4] + _tmp208 * _y[4] - _tmp70 - _tmp73 + _tmp74;
  const Scalar _tmp210 = _tmp136 * _tmp180;
  const Scalar _tmp211 = _tmp162 * _tmp190;
  const Scalar _tmp212 = _tmp126 * sqrt_info(2, 2);
  const Scalar _tmp213 = _tmp112 * _tmp79;
  const Scalar _tmp214 = _tmp126 * sqrt_info(3, 2);
  const Scalar _tmp215 = _tmp112 * _tmp81;
  const Scalar _tmp216 = -_tmp82 - _tmp83 + _tmp84 + _tmp85;
  const Scalar _tmp217 = _tmp216 * _x_T_y[1];
  const Scalar _tmp218 = _tmp182 + _tmp217;
  const Scalar _tmp219 = _tmp218 + _tmp93 + _tmp99;
  const Scalar _tmp220 = _tmp123 * _tmp219;
  const Scalar _tmp221 = _tmp216 * _x_T_y[2];
  const Scalar _tmp222 = _tmp187 + _tmp221;
  const Scalar _tmp223 = -_tmp139 + _tmp141 + _tmp222;
  const Scalar _tmp224 = _tmp136 * _tmp223;
  const Scalar _tmp225 = _tmp126 * _tmp219;
  const Scalar _tmp226 = _tmp144 * _tmp219;
  const Scalar _tmp227 = _tmp125 * _tmp219;
  const Scalar _tmp228 = -_tmp216 * _x_T_y[0];
  const Scalar _tmp229 = _tmp195 + _tmp228;
  const Scalar _tmp230 = _tmp136 * (_tmp130 - _tmp132 + _tmp229);
  const Scalar _tmp231 = _tmp128 * _tmp219;
  const Scalar _tmp232 = _tmp216 * _x_T_y[3];
  const Scalar _tmp233 = _tmp176 + _tmp232;
  const Scalar _tmp234 = _tmp116 - _tmp117 + _tmp233;
  const Scalar _tmp235 = _tmp136 * _tmp234;
  const Scalar _tmp236 = _tmp159 + _tmp204;
  const Scalar _tmp237 = -_tmp236 * _x[5] + _tmp236 * _y[5] - _tmp46 - _tmp50 + _tmp51;
  const Scalar _tmp238 = _tmp147 + _tmp44;
  const Scalar _tmp239 = _tmp201 + _tmp60;
  const Scalar _tmp240 = _tmp152 + _tmp158 + _tmp33 + _tmp55;
  const Scalar _tmp241 = -_tmp238 * _x[5] + _tmp238 * _y[5] - _tmp239 * _x[6] + _tmp239 * _y[6] -
                         _tmp240 * _x[4] + _tmp240 * _y[4];
  const Scalar _tmp242 = _tmp162 * _tmp219;
  const Scalar _tmp243 = _tmp34 + _tmp56 - 1;
  const Scalar _tmp244 = _tmp37 - 1;
  const Scalar _tmp245 = _tmp244 + _tmp34;
  const Scalar _tmp246 = _tmp244 + _tmp56;
  const Scalar _tmp247 = _tmp88 + _tmp89 + _tmp90 + _tmp91;
  const Scalar _tmp248 = _tmp247 * _x_T_y[0];
  const Scalar _tmp249 = _tmp119 + _tmp232 + _tmp248;
  const Scalar _tmp250 = _tmp122 * _tmp249;
  const Scalar _tmp251 = _tmp123 * _tmp249;
  const Scalar _tmp252 = _tmp144 * _tmp249;
  const Scalar _tmp253 = _tmp126 * _tmp249;
  const Scalar _tmp254 = _tmp128 * _tmp249;
  const Scalar _tmp255 = _tmp247 * _x_T_y[1];
  const Scalar _tmp256 = _tmp142 + _tmp255;
  const Scalar _tmp257 = _tmp141 - _tmp221 + _tmp256;
  const Scalar _tmp258 = _tmp247 * _x_T_y[3];
  const Scalar _tmp259 = _tmp134 + _tmp228 + _tmp258;
  const Scalar _tmp260 = _tmp136 * _tmp259;
  const Scalar _tmp261 = _tmp125 * _tmp249;
  const Scalar _tmp262 = _tmp247 * _x_T_y[2];
  const Scalar _tmp263 = _tmp106 - _tmp217 - _tmp262;
  const Scalar _tmp264 = _tmp136 * _tmp263;
  const Scalar _tmp265 = _tmp164 * _tmp249;
  const Scalar _tmp266 = _tmp136 * _tmp257;
  const Scalar _tmp267 = _tmp162 * _tmp249;
  const Scalar _tmp268 = _tmp112 * _tmp263;
  const Scalar _tmp269 = _tmp189 + _tmp256;
  const Scalar _tmp270 = _tmp125 * _tmp269;
  const Scalar _tmp271 = _tmp20 * _tmp270;
  const Scalar _tmp272 = -_tmp105 + _tmp184 + _tmp262;
  const Scalar _tmp273 = _tmp136 * _tmp272;
  const Scalar _tmp274 = -_tmp118 + _tmp179 - _tmp248;
  const Scalar _tmp275 = _tmp112 * (_tmp133 + _tmp197 + _tmp258);
  const Scalar _tmp276 = _tmp27 * _tmp275;
  const Scalar _tmp277 = _tmp126 * _tmp269;
  const Scalar _tmp278 = _tmp144 * _tmp269;
  const Scalar _tmp279 = _tmp123 * _tmp269;
  const Scalar _tmp280 = _tmp136 * _tmp274;
  const Scalar _tmp281 = _tmp270 * _tmp53;
  const Scalar _tmp282 = _tmp183 + _tmp218 + _tmp262;
  const Scalar _tmp283 = _tmp125 * _tmp282;
  const Scalar _tmp284 = _tmp196 + _tmp229 + _tmp258;
  const Scalar _tmp285 = -_tmp188 + _tmp222 - _tmp255;
  const Scalar _tmp286 = _tmp136 * _tmp285;
  const Scalar _tmp287 = _tmp122 * _tmp282;
  const Scalar _tmp288 = _tmp144 * _tmp282;
  const Scalar _tmp289 = _tmp126 * _tmp282;
  const Scalar _tmp290 = -_tmp178 + _tmp233 + _tmp248;
  const Scalar _tmp291 = _tmp136 * _tmp290;
  const Scalar _tmp292 = _tmp128 * _tmp282;
  const Scalar _tmp293 = _tmp123 * _tmp282;
  const Scalar _tmp294 = _tmp162 * _tmp282;
  const Scalar _tmp295 = _tmp136 * _tmp284;

  // Output terms (3)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp31 * _tmp54 + _tmp32 * sqrt_info(0, 0) + _tmp52 * sqrt_info(0, 4) +
               _tmp67 * sqrt_info(0, 5) + _tmp75 * sqrt_info(0, 3) + _tmp77 * sqrt_info(0, 2);
  _res(1, 0) = _tmp32 * sqrt_info(1, 0) + _tmp52 * sqrt_info(1, 4) + _tmp67 * sqrt_info(1, 5) +
               _tmp75 * sqrt_info(1, 3) + _tmp77 * sqrt_info(1, 2) + _tmp78 * sqrt_info(1, 1);
  _res(2, 0) = _tmp32 * sqrt_info(2, 0) + _tmp52 * sqrt_info(2, 4) + _tmp67 * sqrt_info(2, 5) +
               _tmp75 * sqrt_info(2, 3) + _tmp77 * sqrt_info(2, 2) + _tmp79 * _tmp80;
  _res(3, 0) = _tmp32 * sqrt_info(3, 0) + _tmp52 * sqrt_info(3, 4) + _tmp67 * sqrt_info(3, 5) +
               _tmp75 * sqrt_info(3, 3) + _tmp77 * sqrt_info(3, 2) + _tmp78 * sqrt_info(3, 1);
  _res(4, 0) = _tmp32 * sqrt_info(4, 0) + _tmp52 * sqrt_info(4, 4) + _tmp67 * sqrt_info(4, 5) +
               _tmp75 * sqrt_info(4, 3) + _tmp77 * sqrt_info(4, 2) + _tmp78 * sqrt_info(4, 1);
  _res(5, 0) = _tmp32 * sqrt_info(5, 0) + _tmp52 * sqrt_info(5, 4) + _tmp67 * sqrt_info(5, 5) +
               _tmp75 * sqrt_info(5, 3) + _tmp77 * sqrt_info(5, 2) + _tmp80 * _tmp81;

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 6, 6>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp114 * sqrt_info(0, 1) + _tmp120 * _tmp146 + _tmp124 * sqrt_info(0, 2) -
                     _tmp127 * sqrt_info(0, 2) - _tmp129 * sqrt_info(0, 0) +
                     _tmp137 * sqrt_info(0, 0) - _tmp138 * _tmp54 + _tmp143 * sqrt_info(0, 2) +
                     _tmp145 * sqrt_info(0, 0) + _tmp157 * sqrt_info(0, 5) +
                     _tmp161 * sqrt_info(0, 4);
    _res_D_x(1, 0) = _tmp114 * sqrt_info(1, 1) + _tmp120 * _tmp165 + _tmp124 * sqrt_info(1, 2) -
                     _tmp127 * sqrt_info(1, 2) - _tmp129 * sqrt_info(1, 0) +
                     _tmp137 * sqrt_info(1, 0) + _tmp143 * sqrt_info(1, 2) +
                     _tmp145 * sqrt_info(1, 0) + _tmp157 * sqrt_info(1, 5) +
                     _tmp161 * sqrt_info(1, 4) - _tmp163 * sqrt_info(1, 1);
    _res_D_x(2, 0) = _tmp113 * _tmp79 + _tmp120 * _tmp167 + _tmp124 * sqrt_info(2, 2) -
                     _tmp127 * sqrt_info(2, 2) - _tmp129 * sqrt_info(2, 0) +
                     _tmp137 * sqrt_info(2, 0) - _tmp138 * _tmp166 + _tmp143 * sqrt_info(2, 2) +
                     _tmp145 * sqrt_info(2, 0) + _tmp157 * sqrt_info(2, 5) +
                     _tmp161 * sqrt_info(2, 4);
    _res_D_x(3, 0) = _tmp114 * sqrt_info(3, 1) - _tmp120 * _tmp168 + _tmp120 * _tmp169 +
                     _tmp124 * sqrt_info(3, 2) - _tmp127 * sqrt_info(3, 2) -
                     _tmp129 * sqrt_info(3, 0) + _tmp137 * sqrt_info(3, 0) +
                     _tmp143 * sqrt_info(3, 2) + _tmp145 * sqrt_info(3, 0) +
                     _tmp157 * sqrt_info(3, 5) + _tmp161 * sqrt_info(3, 4);
    _res_D_x(4, 0) = _tmp114 * sqrt_info(4, 1) - _tmp120 * _tmp170 + _tmp120 * _tmp172 +
                     _tmp124 * sqrt_info(4, 2) - _tmp129 * sqrt_info(4, 0) + _tmp135 * _tmp171 +
                     _tmp143 * sqrt_info(4, 2) + _tmp145 * sqrt_info(4, 0) +
                     _tmp157 * sqrt_info(4, 5) + _tmp161 * sqrt_info(4, 4) -
                     _tmp163 * sqrt_info(4, 1);
    _res_D_x(5, 0) = _tmp113 * _tmp81 - _tmp120 * _tmp173 + _tmp120 * _tmp174 +
                     _tmp124 * sqrt_info(5, 2) - _tmp129 * sqrt_info(5, 0) +
                     _tmp137 * sqrt_info(5, 0) + _tmp143 * sqrt_info(5, 2) +
                     _tmp145 * sqrt_info(5, 0) + _tmp157 * sqrt_info(5, 5) +
                     _tmp161 * sqrt_info(5, 4) - _tmp163 * sqrt_info(5, 1);
    _res_D_x(0, 1) = _tmp146 * _tmp190 + _tmp180 * _tmp181 + _tmp186 * sqrt_info(0, 0) +
                     _tmp191 * sqrt_info(0, 2) - _tmp192 * sqrt_info(0, 2) +
                     _tmp193 * sqrt_info(0, 0) - _tmp194 * _tmp54 + _tmp199 * sqrt_info(0, 1) -
                     _tmp200 * sqrt_info(0, 0) + _tmp207 * sqrt_info(0, 3) +
                     _tmp209 * sqrt_info(0, 5);
    _res_D_x(1, 1) = _tmp165 * _tmp190 + _tmp186 * sqrt_info(1, 0) + _tmp191 * sqrt_info(1, 2) -
                     _tmp192 * sqrt_info(1, 2) + _tmp193 * sqrt_info(1, 0) +
                     _tmp199 * sqrt_info(1, 1) - _tmp200 * sqrt_info(1, 0) +
                     _tmp207 * sqrt_info(1, 3) + _tmp209 * sqrt_info(1, 5) +
                     _tmp210 * sqrt_info(1, 2) - _tmp211 * sqrt_info(1, 1);
    _res_D_x(2, 1) = -_tmp166 * _tmp194 + _tmp167 * _tmp190 + _tmp186 * sqrt_info(2, 0) -
                     _tmp190 * _tmp212 + _tmp191 * sqrt_info(2, 2) + _tmp193 * sqrt_info(2, 0) +
                     _tmp198 * _tmp213 - _tmp200 * sqrt_info(2, 0) + _tmp207 * sqrt_info(2, 3) +
                     _tmp209 * sqrt_info(2, 5) + _tmp210 * sqrt_info(2, 2);
    _res_D_x(3, 1) = -_tmp168 * _tmp190 + _tmp169 * _tmp190 + _tmp186 * sqrt_info(3, 0) -
                     _tmp190 * _tmp214 + _tmp191 * sqrt_info(3, 2) + _tmp193 * sqrt_info(3, 0) +
                     _tmp199 * sqrt_info(3, 1) - _tmp200 * sqrt_info(3, 0) +
                     _tmp207 * sqrt_info(3, 3) + _tmp209 * sqrt_info(3, 5) +
                     _tmp210 * sqrt_info(3, 2);
    _res_D_x(4, 1) = -_tmp170 * _tmp190 + _tmp171 * _tmp185 + _tmp172 * _tmp190 +
                     _tmp191 * sqrt_info(4, 2) + _tmp193 * sqrt_info(4, 0) +
                     _tmp199 * sqrt_info(4, 1) - _tmp200 * sqrt_info(4, 0) +
                     _tmp207 * sqrt_info(4, 3) + _tmp209 * sqrt_info(4, 5) +
                     _tmp210 * sqrt_info(4, 2) - _tmp211 * sqrt_info(4, 1);
    _res_D_x(5, 1) = -_tmp173 * _tmp190 + _tmp174 * _tmp190 + _tmp186 * sqrt_info(5, 0) +
                     _tmp191 * sqrt_info(5, 2) + _tmp193 * sqrt_info(5, 0) + _tmp198 * _tmp215 -
                     _tmp200 * sqrt_info(5, 0) + _tmp207 * sqrt_info(5, 3) +
                     _tmp209 * sqrt_info(5, 5) + _tmp210 * sqrt_info(5, 2) -
                     _tmp211 * sqrt_info(5, 1);
    _res_D_x(0, 2) = _tmp146 * _tmp219 + _tmp220 * sqrt_info(0, 2) + _tmp224 * sqrt_info(0, 0) -
                     _tmp225 * sqrt_info(0, 2) + _tmp226 * sqrt_info(0, 0) - _tmp227 * _tmp54 +
                     _tmp230 * sqrt_info(0, 2) - _tmp231 * sqrt_info(0, 0) +
                     _tmp235 * sqrt_info(0, 1) + _tmp237 * sqrt_info(0, 3) +
                     _tmp241 * sqrt_info(0, 4);
    _res_D_x(1, 2) = _tmp165 * _tmp219 + _tmp220 * sqrt_info(1, 2) + _tmp224 * sqrt_info(1, 0) -
                     _tmp225 * sqrt_info(1, 2) + _tmp226 * sqrt_info(1, 0) +
                     _tmp230 * sqrt_info(1, 2) - _tmp231 * sqrt_info(1, 0) +
                     _tmp235 * sqrt_info(1, 1) + _tmp237 * sqrt_info(1, 3) +
                     _tmp241 * sqrt_info(1, 4) - _tmp242 * sqrt_info(1, 1);
    _res_D_x(2, 2) = -_tmp166 * _tmp227 + _tmp167 * _tmp219 - _tmp212 * _tmp219 +
                     _tmp213 * _tmp234 + _tmp220 * sqrt_info(2, 2) + _tmp224 * sqrt_info(2, 0) +
                     _tmp226 * sqrt_info(2, 0) + _tmp230 * sqrt_info(2, 2) -
                     _tmp231 * sqrt_info(2, 0) + _tmp237 * sqrt_info(2, 3) +
                     _tmp241 * sqrt_info(2, 4);
    _res_D_x(3, 2) = -_tmp168 * _tmp219 + _tmp169 * _tmp219 - _tmp214 * _tmp219 +
                     _tmp220 * sqrt_info(3, 2) + _tmp224 * sqrt_info(3, 0) +
                     _tmp226 * sqrt_info(3, 0) + _tmp230 * sqrt_info(3, 2) -
                     _tmp231 * sqrt_info(3, 0) + _tmp235 * sqrt_info(3, 1) +
                     _tmp237 * sqrt_info(3, 3) + _tmp241 * sqrt_info(3, 4);
    _res_D_x(4, 2) = -_tmp170 * _tmp219 + _tmp171 * _tmp223 + _tmp172 * _tmp219 +
                     _tmp220 * sqrt_info(4, 2) + _tmp226 * sqrt_info(4, 0) +
                     _tmp230 * sqrt_info(4, 2) - _tmp231 * sqrt_info(4, 0) +
                     _tmp235 * sqrt_info(4, 1) + _tmp237 * sqrt_info(4, 3) +
                     _tmp241 * sqrt_info(4, 4) - _tmp242 * sqrt_info(4, 1);
    _res_D_x(5, 2) = -_tmp173 * _tmp219 + _tmp174 * _tmp219 + _tmp215 * _tmp234 +
                     _tmp220 * sqrt_info(5, 2) + _tmp224 * sqrt_info(5, 0) +
                     _tmp226 * sqrt_info(5, 0) + _tmp230 * sqrt_info(5, 2) -
                     _tmp231 * sqrt_info(5, 0) + _tmp237 * sqrt_info(5, 3) +
                     _tmp241 * sqrt_info(5, 4) - _tmp242 * sqrt_info(5, 1);
    _res_D_x(0, 3) =
        _tmp148 * sqrt_info(0, 4) + _tmp202 * sqrt_info(0, 5) + _tmp243 * sqrt_info(0, 3);
    _res_D_x(1, 3) =
        _tmp148 * sqrt_info(1, 4) + _tmp202 * sqrt_info(1, 5) + _tmp243 * sqrt_info(1, 3);
    _res_D_x(2, 3) =
        _tmp148 * sqrt_info(2, 4) + _tmp202 * sqrt_info(2, 5) + _tmp243 * sqrt_info(2, 3);
    _res_D_x(3, 3) =
        _tmp148 * sqrt_info(3, 4) + _tmp202 * sqrt_info(3, 5) + _tmp243 * sqrt_info(3, 3);
    _res_D_x(4, 3) =
        _tmp148 * sqrt_info(4, 4) + _tmp202 * sqrt_info(4, 5) + _tmp243 * sqrt_info(4, 3);
    _res_D_x(5, 3) =
        _tmp148 * sqrt_info(5, 4) + _tmp202 * sqrt_info(5, 5) + _tmp243 * sqrt_info(5, 3);
    _res_D_x(0, 4) =
        _tmp206 * sqrt_info(0, 5) + _tmp238 * sqrt_info(0, 3) + _tmp245 * sqrt_info(0, 4);
    _res_D_x(1, 4) =
        _tmp206 * sqrt_info(1, 5) + _tmp238 * sqrt_info(1, 3) + _tmp245 * sqrt_info(1, 4);
    _res_D_x(2, 4) =
        _tmp206 * sqrt_info(2, 5) + _tmp238 * sqrt_info(2, 3) + _tmp245 * sqrt_info(2, 4);
    _res_D_x(3, 4) =
        _tmp206 * sqrt_info(3, 5) + _tmp238 * sqrt_info(3, 3) + _tmp245 * sqrt_info(3, 4);
    _res_D_x(4, 4) =
        _tmp206 * sqrt_info(4, 5) + _tmp238 * sqrt_info(4, 3) + _tmp245 * sqrt_info(4, 4);
    _res_D_x(5, 4) =
        _tmp206 * sqrt_info(5, 5) + _tmp238 * sqrt_info(5, 3) + _tmp245 * sqrt_info(5, 4);
    _res_D_x(0, 5) =
        _tmp156 * sqrt_info(0, 4) + _tmp239 * sqrt_info(0, 3) + _tmp246 * sqrt_info(0, 5);
    _res_D_x(1, 5) =
        _tmp156 * sqrt_info(1, 4) + _tmp239 * sqrt_info(1, 3) + _tmp246 * sqrt_info(1, 5);
    _res_D_x(2, 5) =
        _tmp156 * sqrt_info(2, 4) + _tmp239 * sqrt_info(2, 3) + _tmp246 * sqrt_info(2, 5);
    _res_D_x(3, 5) =
        _tmp156 * sqrt_info(3, 4) + _tmp239 * sqrt_info(3, 3) + _tmp246 * sqrt_info(3, 5);
    _res_D_x(4, 5) =
        _tmp156 * sqrt_info(4, 4) + _tmp239 * sqrt_info(4, 3) + _tmp246 * sqrt_info(4, 5);
    _res_D_x(5, 5) =
        _tmp156 * sqrt_info(5, 4) + _tmp239 * sqrt_info(5, 3) + _tmp246 * sqrt_info(5, 5);
  }

  if (res_D_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 6, 6>> _res_D_y{res_D_y};

    _res_D_y(0, 0) = _tmp181 * _tmp257 + _tmp250 * _tmp54 + _tmp251 * sqrt_info(0, 2) +
                     _tmp252 * sqrt_info(0, 0) - _tmp253 * sqrt_info(0, 2) -
                     _tmp254 * sqrt_info(0, 0) + _tmp260 * sqrt_info(0, 0) - _tmp261 * _tmp54 +
                     _tmp264 * sqrt_info(0, 1);
    _res_D_y(1, 0) =
        _tmp251 * sqrt_info(1, 2) + _tmp252 * sqrt_info(1, 0) - _tmp253 * sqrt_info(1, 2) -
        _tmp254 * sqrt_info(1, 0) + _tmp260 * sqrt_info(1, 0) + _tmp264 * sqrt_info(1, 1) +
        _tmp265 * sqrt_info(1, 1) + _tmp266 * sqrt_info(1, 2) - _tmp267 * sqrt_info(1, 1);
    _res_D_y(2, 0) = _tmp166 * _tmp250 - _tmp166 * _tmp261 + _tmp251 * sqrt_info(2, 2) +
                     _tmp252 * sqrt_info(2, 0) - _tmp253 * sqrt_info(2, 2) -
                     _tmp254 * sqrt_info(2, 0) + _tmp260 * sqrt_info(2, 0) +
                     _tmp266 * sqrt_info(2, 2) + _tmp268 * _tmp79;
    _res_D_y(3, 0) = -_tmp168 * _tmp249 + _tmp251 * sqrt_info(3, 2) + _tmp252 * sqrt_info(3, 0) -
                     _tmp253 * sqrt_info(3, 2) - _tmp254 * sqrt_info(3, 0) +
                     _tmp260 * sqrt_info(3, 0) + _tmp264 * sqrt_info(3, 1) +
                     _tmp265 * sqrt_info(3, 1) + _tmp266 * sqrt_info(3, 2);
    _res_D_y(4, 0) = -_tmp170 * _tmp249 + _tmp171 * _tmp259 + _tmp172 * _tmp249 +
                     _tmp251 * sqrt_info(4, 2) + _tmp252 * sqrt_info(4, 0) -
                     _tmp254 * sqrt_info(4, 0) + _tmp264 * sqrt_info(4, 1) +
                     _tmp266 * sqrt_info(4, 2) - _tmp267 * sqrt_info(4, 1);
    _res_D_y(5, 0) = -_tmp173 * _tmp249 + _tmp251 * sqrt_info(5, 2) + _tmp252 * sqrt_info(5, 0) -
                     _tmp254 * sqrt_info(5, 0) + _tmp260 * sqrt_info(5, 0) +
                     _tmp265 * sqrt_info(5, 1) + _tmp266 * sqrt_info(5, 2) -
                     _tmp267 * sqrt_info(5, 1) + _tmp268 * _tmp81;
    _res_D_y(0, 1) = _tmp146 * _tmp269 + _tmp181 * _tmp274 - _tmp270 * _tmp54 -
                     _tmp271 * sqrt_info(0, 0) + _tmp273 * sqrt_info(0, 0) +
                     _tmp276 * sqrt_info(0, 1) - _tmp277 * sqrt_info(0, 2) +
                     _tmp278 * sqrt_info(0, 0) + _tmp279 * sqrt_info(0, 2);
    _res_D_y(1, 1) = _tmp165 * _tmp269 - _tmp271 * sqrt_info(1, 0) + _tmp273 * sqrt_info(1, 0) +
                     _tmp276 * sqrt_info(1, 1) - _tmp277 * sqrt_info(1, 2) +
                     _tmp278 * sqrt_info(1, 0) + _tmp279 * sqrt_info(1, 2) +
                     _tmp280 * sqrt_info(1, 2) - _tmp281 * sqrt_info(1, 1);
    _res_D_y(2, 1) = -_tmp166 * _tmp270 + _tmp167 * _tmp269 - _tmp212 * _tmp269 -
                     _tmp271 * sqrt_info(2, 0) + _tmp273 * sqrt_info(2, 0) + _tmp275 * _tmp79 +
                     _tmp278 * sqrt_info(2, 0) + _tmp279 * sqrt_info(2, 2) +
                     _tmp280 * sqrt_info(2, 2);
    _res_D_y(3, 1) = _tmp169 * _tmp269 - _tmp214 * _tmp269 - _tmp271 * sqrt_info(3, 0) +
                     _tmp273 * sqrt_info(3, 0) + _tmp276 * sqrt_info(3, 1) +
                     _tmp278 * sqrt_info(3, 0) + _tmp279 * sqrt_info(3, 2) +
                     _tmp280 * sqrt_info(3, 2) - _tmp281 * sqrt_info(3, 1);
    _res_D_y(4, 1) = -_tmp170 * _tmp269 + _tmp171 * _tmp272 + _tmp172 * _tmp269 -
                     _tmp271 * sqrt_info(4, 0) + _tmp276 * sqrt_info(4, 1) +
                     _tmp278 * sqrt_info(4, 0) + _tmp279 * sqrt_info(4, 2) +
                     _tmp280 * sqrt_info(4, 2) - _tmp281 * sqrt_info(4, 1);
    _res_D_y(5, 1) = -_tmp173 * _tmp269 + _tmp174 * _tmp269 - _tmp271 * sqrt_info(5, 0) +
                     _tmp273 * sqrt_info(5, 0) + _tmp275 * _tmp81 + _tmp278 * sqrt_info(5, 0) +
                     _tmp279 * sqrt_info(5, 2) + _tmp280 * sqrt_info(5, 2) -
                     _tmp281 * sqrt_info(5, 1);
    _res_D_y(0, 2) = _tmp181 * _tmp284 - _tmp283 * _tmp54 + _tmp286 * sqrt_info(0, 0) +
                     _tmp287 * _tmp54 + _tmp288 * sqrt_info(0, 0) - _tmp289 * sqrt_info(0, 2) +
                     _tmp291 * sqrt_info(0, 1) - _tmp292 * sqrt_info(0, 0) +
                     _tmp293 * sqrt_info(0, 2);
    _res_D_y(1, 2) = _tmp165 * _tmp282 + _tmp286 * sqrt_info(1, 0) + _tmp288 * sqrt_info(1, 0) -
                     _tmp289 * sqrt_info(1, 2) + _tmp291 * sqrt_info(1, 1) -
                     _tmp292 * sqrt_info(1, 0) + _tmp293 * sqrt_info(1, 2) -
                     _tmp294 * sqrt_info(1, 1) + _tmp295 * sqrt_info(1, 2);
    _res_D_y(2, 2) = -_tmp166 * _tmp283 + _tmp166 * _tmp287 - _tmp212 * _tmp282 +
                     _tmp213 * _tmp290 + _tmp286 * sqrt_info(2, 0) + _tmp288 * sqrt_info(2, 0) -
                     _tmp292 * sqrt_info(2, 0) + _tmp293 * sqrt_info(2, 2) +
                     _tmp295 * sqrt_info(2, 2);
    _res_D_y(3, 2) = -_tmp168 * _tmp282 + _tmp169 * _tmp282 - _tmp214 * _tmp282 +
                     _tmp286 * sqrt_info(3, 0) + _tmp288 * sqrt_info(3, 0) +
                     _tmp291 * sqrt_info(3, 1) - _tmp292 * sqrt_info(3, 0) +
                     _tmp293 * sqrt_info(3, 2) + _tmp295 * sqrt_info(3, 2);
    _res_D_y(4, 2) = -_tmp170 * _tmp282 + _tmp171 * _tmp285 + _tmp172 * _tmp282 +
                     _tmp288 * sqrt_info(4, 0) + _tmp291 * sqrt_info(4, 1) -
                     _tmp292 * sqrt_info(4, 0) + _tmp293 * sqrt_info(4, 2) -
                     _tmp294 * sqrt_info(4, 1) + _tmp295 * sqrt_info(4, 2);
    _res_D_y(5, 2) = -_tmp173 * _tmp282 + _tmp174 * _tmp282 + _tmp215 * _tmp290 +
                     _tmp286 * sqrt_info(5, 0) + _tmp288 * sqrt_info(5, 0) -
                     _tmp292 * sqrt_info(5, 0) + _tmp293 * sqrt_info(5, 2) -
                     _tmp294 * sqrt_info(5, 1) + _tmp295 * sqrt_info(5, 2);
    _res_D_y(0, 3) = _tmp45 * sqrt_info(0, 4) + _tmp61 * sqrt_info(0, 5) + _tmp68 * sqrt_info(0, 3);
    _res_D_y(1, 3) = _tmp45 * sqrt_info(1, 4) + _tmp61 * sqrt_info(1, 5) + _tmp68 * sqrt_info(1, 3);
    _res_D_y(2, 3) = _tmp45 * sqrt_info(2, 4) + _tmp61 * sqrt_info(2, 5) + _tmp68 * sqrt_info(2, 3);
    _res_D_y(3, 3) = _tmp45 * sqrt_info(3, 4) + _tmp61 * sqrt_info(3, 5) + _tmp68 * sqrt_info(3, 3);
    _res_D_y(4, 3) = _tmp45 * sqrt_info(4, 4) + _tmp61 * sqrt_info(4, 5) + _tmp68 * sqrt_info(4, 3);
    _res_D_y(5, 3) = _tmp45 * sqrt_info(5, 4) + _tmp61 * sqrt_info(5, 5) + _tmp68 * sqrt_info(5, 3);
    _res_D_y(0, 4) = _tmp39 * sqrt_info(0, 4) + _tmp64 * sqrt_info(0, 5) + _tmp69 * sqrt_info(0, 3);
    _res_D_y(1, 4) = _tmp39 * sqrt_info(1, 4) + _tmp64 * sqrt_info(1, 5) + _tmp69 * sqrt_info(1, 3);
    _res_D_y(2, 4) = _tmp39 * sqrt_info(2, 4) + _tmp64 * sqrt_info(2, 5) + _tmp69 * sqrt_info(2, 3);
    _res_D_y(3, 4) = _tmp39 * sqrt_info(3, 4) + _tmp64 * sqrt_info(3, 5) + _tmp69 * sqrt_info(3, 3);
    _res_D_y(4, 4) = _tmp39 * sqrt_info(4, 4) + _tmp64 * sqrt_info(4, 5) + _tmp69 * sqrt_info(4, 3);
    _res_D_y(5, 4) = _tmp39 * sqrt_info(5, 4) + _tmp64 * sqrt_info(5, 5) + _tmp69 * sqrt_info(5, 3);
    _res_D_y(0, 5) = _tmp49 * sqrt_info(0, 4) + _tmp58 * sqrt_info(0, 5) + _tmp72 * sqrt_info(0, 3);
    _res_D_y(1, 5) = _tmp49 * sqrt_info(1, 4) + _tmp58 * sqrt_info(1, 5) + _tmp72 * sqrt_info(1, 3);
    _res_D_y(2, 5) = _tmp49 * sqrt_info(2, 4) + _tmp58 * sqrt_info(2, 5) + _tmp72 * sqrt_info(2, 3);
    _res_D_y(3, 5) = _tmp49 * sqrt_info(3, 4) + _tmp58 * sqrt_info(3, 5) + _tmp72 * sqrt_info(3, 3);
    _res_D_y(4, 5) = _tmp49 * sqrt_info(4, 4) + _tmp58 * sqrt_info(4, 5) + _tmp72 * sqrt_info(4, 3);
    _res_D_y(5, 5) = _tmp49 * sqrt_info(5, 4) + _tmp58 * sqrt_info(5, 5) + _tmp72 * sqrt_info(5, 3);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
