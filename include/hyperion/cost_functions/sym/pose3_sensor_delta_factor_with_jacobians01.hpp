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
 * Symbolic function: pose3_sensor_delta_factor
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
 *     res_D_x_T_y: (6x6) jacobian of res (6) wrt arg x_T_y (6)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Pose3SensorDeltaFactorWithJacobians01(
    const sym::Pose3<Scalar>& x, const sym::Pose3<Scalar>& x_T_y, const sym::Pose3<Scalar>& y,
    const Eigen::Matrix<Scalar, 6, 6>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr, Scalar* const res_D_x_T_y = nullptr) {
  // Total ops: 1335

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x_T_y = x_T_y.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (280)
  const Scalar _tmp0 = _x[2] * _y[2];
  const Scalar _tmp1 = _x[1] * _y[1];
  const Scalar _tmp2 = _x[0] * _y[0];
  const Scalar _tmp3 = _x[3] * _y[3];
  const Scalar _tmp4 = _tmp0 + _tmp1 + _tmp2 + _tmp3;
  const Scalar _tmp5 = _tmp4 * _x_T_y[0];
  const Scalar _tmp6 = _x[3] * _y[2];
  const Scalar _tmp7 = _x[2] * _y[3];
  const Scalar _tmp8 = _x[1] * _y[0];
  const Scalar _tmp9 = _x[0] * _y[1];
  const Scalar _tmp10 = _tmp6 - _tmp7 + _tmp8 - _tmp9;
  const Scalar _tmp11 = _tmp10 * _x_T_y[1];
  const Scalar _tmp12 = _x[3] * _y[0];
  const Scalar _tmp13 = _x[2] * _y[1];
  const Scalar _tmp14 = _x[1] * _y[2];
  const Scalar _tmp15 = _x[0] * _y[3];
  const Scalar _tmp16 = _tmp12 + _tmp13 - _tmp14 - _tmp15;
  const Scalar _tmp17 = _tmp16 * _x_T_y[3];
  const Scalar _tmp18 = _x[3] * _y[1];
  const Scalar _tmp19 = _x[2] * _y[0];
  const Scalar _tmp20 = _x[1] * _y[3];
  const Scalar _tmp21 = _x[0] * _y[2];
  const Scalar _tmp22 = _tmp18 - _tmp19 - _tmp20 + _tmp21;
  const Scalar _tmp23 = _tmp22 * _x_T_y[2];
  const Scalar _tmp24 = -_tmp11 + _tmp17 + _tmp23 - _tmp5;
  const Scalar _tmp25 = _tmp10 * _x_T_y[2];
  const Scalar _tmp26 = _tmp16 * _x_T_y[0];
  const Scalar _tmp27 = _tmp22 * _x_T_y[1];
  const Scalar _tmp28 = -_tmp25 - _tmp26 - _tmp27;
  const Scalar _tmp29 = _tmp4 * _x_T_y[3];
  const Scalar _tmp30 =
      2 * std::min<Scalar>(0, (((-_tmp28 + _tmp29) > 0) - ((-_tmp28 + _tmp29) < 0))) + 1;
  const Scalar _tmp31 = 2 * _tmp30;
  const Scalar _tmp32 = 1 - epsilon;
  const Scalar _tmp33 = std::min<Scalar>(_tmp32, std::fabs(_tmp28 - _tmp29));
  const Scalar _tmp34 = std::acos(_tmp33) / std::sqrt(Scalar(1 - std::pow(_tmp33, Scalar(2))));
  const Scalar _tmp35 = _tmp31 * _tmp34;
  const Scalar _tmp36 = _tmp24 * _tmp35;
  const Scalar _tmp37 = std::pow(_x[2], Scalar(2));
  const Scalar _tmp38 = 2 * _tmp37;
  const Scalar _tmp39 = -_tmp38;
  const Scalar _tmp40 = std::pow(_x[0], Scalar(2));
  const Scalar _tmp41 = 2 * _tmp40;
  const Scalar _tmp42 = 1 - _tmp41;
  const Scalar _tmp43 = _tmp39 + _tmp42;
  const Scalar _tmp44 = 2 * _x[0];
  const Scalar _tmp45 = _tmp44 * _x[1];
  const Scalar _tmp46 = 2 * _x[2];
  const Scalar _tmp47 = _tmp46 * _x[3];
  const Scalar _tmp48 = -_tmp47;
  const Scalar _tmp49 = _tmp45 + _tmp48;
  const Scalar _tmp50 = _tmp49 * _x[4];
  const Scalar _tmp51 = _tmp44 * _x[3];
  const Scalar _tmp52 = _tmp46 * _x[1];
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp53 * _x[6];
  const Scalar _tmp55 = _tmp49 * _y[4] + _tmp53 * _y[6];
  const Scalar _tmp56 = -_tmp43 * _x[5] + _tmp43 * _y[5] - _tmp50 - _tmp54 + _tmp55 - _x_T_y[5];
  const Scalar _tmp57 = _tmp4 * _x_T_y[1];
  const Scalar _tmp58 = _tmp10 * _x_T_y[0];
  const Scalar _tmp59 = _tmp16 * _x_T_y[2];
  const Scalar _tmp60 = _tmp22 * _x_T_y[3];
  const Scalar _tmp61 = -_tmp57 + _tmp58 - _tmp59 + _tmp60;
  const Scalar _tmp62 = _tmp61 * sqrt_info(0, 1);
  const Scalar _tmp63 = std::pow(_x[1], Scalar(2));
  const Scalar _tmp64 = 2 * _tmp63;
  const Scalar _tmp65 = -_tmp64;
  const Scalar _tmp66 = _tmp42 + _tmp65;
  const Scalar _tmp67 = _tmp46 * _x[0];
  const Scalar _tmp68 = 2 * _x[1] * _x[3];
  const Scalar _tmp69 = _tmp67 + _tmp68;
  const Scalar _tmp70 = _tmp69 * _x[4];
  const Scalar _tmp71 = -_tmp51;
  const Scalar _tmp72 = _tmp52 + _tmp71;
  const Scalar _tmp73 = _tmp72 * _x[5];
  const Scalar _tmp74 = _tmp69 * _y[4] + _tmp72 * _y[5];
  const Scalar _tmp75 = -_tmp66 * _x[6] + _tmp66 * _y[6] - _tmp70 - _tmp73 + _tmp74 - _x_T_y[6];
  const Scalar _tmp76 = _tmp39 + _tmp65 + 1;
  const Scalar _tmp77 = _tmp45 + _tmp47;
  const Scalar _tmp78 = _tmp77 * _x[5];
  const Scalar _tmp79 = -_tmp68;
  const Scalar _tmp80 = _tmp67 + _tmp79;
  const Scalar _tmp81 = _tmp80 * _x[6];
  const Scalar _tmp82 = _tmp77 * _y[5] + _tmp80 * _y[6];
  const Scalar _tmp83 = -_tmp76 * _x[4] + _tmp76 * _y[4] - _tmp78 - _tmp81 + _tmp82 - _x_T_y[4];
  const Scalar _tmp84 = _tmp4 * _x_T_y[2];
  const Scalar _tmp85 = _tmp10 * _x_T_y[3];
  const Scalar _tmp86 = _tmp16 * _x_T_y[1];
  const Scalar _tmp87 = _tmp22 * _x_T_y[0];
  const Scalar _tmp88 = -_tmp84 + _tmp85 + _tmp86 - _tmp87;
  const Scalar _tmp89 = _tmp34 * _tmp88;
  const Scalar _tmp90 = _tmp31 * _tmp89;
  const Scalar _tmp91 = _tmp35 * _tmp61;
  const Scalar _tmp92 = _tmp31 * sqrt_info(4, 2);
  const Scalar _tmp93 = -Scalar(1) / Scalar(2) * _tmp0 - Scalar(1) / Scalar(2) * _tmp1 -
                        Scalar(1) / Scalar(2) * _tmp2 - Scalar(1) / Scalar(2) * _tmp3;
  const Scalar _tmp94 = _tmp93 * _x_T_y[2];
  const Scalar _tmp95 = (Scalar(1) / Scalar(2)) * _tmp12;
  const Scalar _tmp96 = (Scalar(1) / Scalar(2)) * _tmp13;
  const Scalar _tmp97 = (Scalar(1) / Scalar(2)) * _tmp14;
  const Scalar _tmp98 = (Scalar(1) / Scalar(2)) * _tmp15;
  const Scalar _tmp99 = _tmp95 + _tmp96 - _tmp97 - _tmp98;
  const Scalar _tmp100 = -_tmp99 * _x_T_y[1];
  const Scalar _tmp101 = (Scalar(1) / Scalar(2)) * _tmp6;
  const Scalar _tmp102 = (Scalar(1) / Scalar(2)) * _tmp7;
  const Scalar _tmp103 = (Scalar(1) / Scalar(2)) * _tmp8;
  const Scalar _tmp104 = (Scalar(1) / Scalar(2)) * _tmp9;
  const Scalar _tmp105 = _tmp101 - _tmp102 + _tmp103 - _tmp104;
  const Scalar _tmp106 = _tmp105 * _x_T_y[3];
  const Scalar _tmp107 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp108 = (Scalar(1) / Scalar(2)) * _tmp19;
  const Scalar _tmp109 = (Scalar(1) / Scalar(2)) * _tmp20;
  const Scalar _tmp110 = (Scalar(1) / Scalar(2)) * _tmp21;
  const Scalar _tmp111 = -_tmp107 + _tmp108 + _tmp109 - _tmp110;
  const Scalar _tmp112 = _tmp25 + _tmp26 + _tmp27 + _tmp29;
  const Scalar _tmp113 = std::fabs(_tmp112);
  const Scalar _tmp114 = std::min<Scalar>(_tmp113, _tmp32);
  const Scalar _tmp115 = std::acos(_tmp114);
  const Scalar _tmp116 = 1 - std::pow(_tmp114, Scalar(2));
  const Scalar _tmp117 = _tmp115 / std::sqrt(_tmp116);
  const Scalar _tmp118 = _tmp117 * _tmp31;
  const Scalar _tmp119 = _tmp118 * (_tmp100 + _tmp106 + _tmp111 * _x_T_y[0] - _tmp94);
  const Scalar _tmp120 = _tmp88 * sqrt_info(0, 2);
  const Scalar _tmp121 = _tmp93 * _x_T_y[0];
  const Scalar _tmp122 = _tmp99 * _x_T_y[3];
  const Scalar _tmp123 = _tmp105 * _x_T_y[1];
  const Scalar _tmp124 = _tmp111 * _x_T_y[2] + _tmp121 + _tmp122 + _tmp123;
  const Scalar _tmp125 = _tmp30 * ((((-_tmp113 + _tmp32) > 0) - ((-_tmp113 + _tmp32) < 0)) + 1) *
                         (((_tmp112) > 0) - ((_tmp112) < 0));
  const Scalar _tmp126 = _tmp114 * _tmp115 * _tmp125 / (_tmp116 * std::sqrt(_tmp116));
  const Scalar _tmp127 = _tmp124 * _tmp126;
  const Scalar _tmp128 = _tmp125 / _tmp116;
  const Scalar _tmp129 = _tmp124 * _tmp128;
  const Scalar _tmp130 = _tmp129 * _tmp88;
  const Scalar _tmp131 = _tmp129 * _tmp24;
  const Scalar _tmp132 = _tmp93 * _x_T_y[3];
  const Scalar _tmp133 = _tmp99 * _x_T_y[0];
  const Scalar _tmp134 = _tmp105 * _x_T_y[2];
  const Scalar _tmp135 = _tmp118 * (-_tmp111 * _x_T_y[1] + _tmp132 - _tmp133 + _tmp134);
  const Scalar _tmp136 = _tmp93 * _x_T_y[1];
  const Scalar _tmp137 = _tmp99 * _x_T_y[2];
  const Scalar _tmp138 = -_tmp105 * _x_T_y[0];
  const Scalar _tmp139 = _tmp117 * (_tmp111 * _x_T_y[3] + _tmp136 - _tmp137 + _tmp138);
  const Scalar _tmp140 = _tmp139 * _tmp31;
  const Scalar _tmp141 = _tmp126 * _tmp24;
  const Scalar _tmp142 = _tmp124 * _tmp141;
  const Scalar _tmp143 = -_tmp45;
  const Scalar _tmp144 = _tmp143 + _tmp47;
  const Scalar _tmp145 = std::pow(_x[3], Scalar(2));
  const Scalar _tmp146 = -_tmp145;
  const Scalar _tmp147 = -_tmp63;
  const Scalar _tmp148 = _tmp146 + _tmp147 + _tmp37 + _tmp40;
  const Scalar _tmp149 = -_tmp52;
  const Scalar _tmp150 = _tmp149 + _tmp71;
  const Scalar _tmp151 = -_tmp144 * _x[4] + _tmp144 * _y[4] - _tmp148 * _x[5] + _tmp148 * _y[5] -
                         _tmp150 * _x[6] + _tmp150 * _y[6];
  const Scalar _tmp152 = _tmp145 + _tmp147;
  const Scalar _tmp153 = -_tmp40;
  const Scalar _tmp154 = _tmp153 + _tmp37;
  const Scalar _tmp155 = _tmp152 + _tmp154;
  const Scalar _tmp156 = -_tmp155 * _x[6] + _tmp155 * _y[6] - _tmp70 - _tmp73 + _tmp74;
  const Scalar _tmp157 = _tmp88 * sqrt_info(1, 2);
  const Scalar _tmp158 = _tmp129 * _tmp61;
  const Scalar _tmp159 = _tmp127 * _tmp61;
  const Scalar _tmp160 = _tmp127 * _tmp88;
  const Scalar _tmp161 = _tmp88 * sqrt_info(3, 2);
  const Scalar _tmp162 = _tmp61 * sqrt_info(4, 1);
  const Scalar _tmp163 = _tmp88 * sqrt_info(5, 2);
  const Scalar _tmp164 = _tmp61 * sqrt_info(5, 1);
  const Scalar _tmp165 = -_tmp101 + _tmp102 - _tmp103 + _tmp104;
  const Scalar _tmp166 = _tmp107 - _tmp108 - _tmp109 + _tmp110;
  const Scalar _tmp167 = -_tmp166 * _x_T_y[2];
  const Scalar _tmp168 = -_tmp121 + _tmp122 + _tmp165 * _x_T_y[1] + _tmp167;
  const Scalar _tmp169 = _tmp118 * _tmp168;
  const Scalar _tmp170 = _tmp166 * _x_T_y[0];
  const Scalar _tmp171 = _tmp118 * (_tmp100 + _tmp165 * _x_T_y[3] - _tmp170 + _tmp94);
  const Scalar _tmp172 = _tmp166 * _x_T_y[3];
  const Scalar _tmp173 = _tmp136 + _tmp137 + _tmp165 * _x_T_y[0] + _tmp172;
  const Scalar _tmp174 = _tmp126 * _tmp173;
  const Scalar _tmp175 = _tmp174 * _tmp88;
  const Scalar _tmp176 = _tmp128 * _tmp173;
  const Scalar _tmp177 = _tmp176 * _tmp88;
  const Scalar _tmp178 = _tmp141 * _tmp173;
  const Scalar _tmp179 = _tmp166 * _x_T_y[1];
  const Scalar _tmp180 = _tmp132 + _tmp133 - _tmp165 * _x_T_y[2] - _tmp179;
  const Scalar _tmp181 = _tmp118 * sqrt_info(0, 1);
  const Scalar _tmp182 = _tmp128 * _tmp24;
  const Scalar _tmp183 = _tmp173 * _tmp182;
  const Scalar _tmp184 = -_tmp67;
  const Scalar _tmp185 = _tmp184 + _tmp79;
  const Scalar _tmp186 = -_tmp37;
  const Scalar _tmp187 = _tmp186 + _tmp40;
  const Scalar _tmp188 = _tmp146 + _tmp63;
  const Scalar _tmp189 = _tmp187 + _tmp188;
  const Scalar _tmp190 = _tmp149 + _tmp51;
  const Scalar _tmp191 = -_tmp185 * _x[4] + _tmp185 * _y[4] - _tmp189 * _x[6] + _tmp189 * _y[6] -
                         _tmp190 * _x[5] + _tmp190 * _y[5];
  const Scalar _tmp192 = _tmp152 + _tmp187;
  const Scalar _tmp193 = -_tmp192 * _x[4] + _tmp192 * _y[4] - _tmp78 - _tmp81 + _tmp82;
  const Scalar _tmp194 = _tmp174 * _tmp61;
  const Scalar _tmp195 = _tmp128 * _tmp61;
  const Scalar _tmp196 = _tmp173 * _tmp195;
  const Scalar _tmp197 = _tmp118 * _tmp180;
  const Scalar _tmp198 = _tmp118 * sqrt_info(2, 2);
  const Scalar _tmp199 = _tmp195 * sqrt_info(2, 1);
  const Scalar _tmp200 = _tmp118 * sqrt_info(3, 2);
  const Scalar _tmp201 = _tmp195 * sqrt_info(3, 1);
  const Scalar _tmp202 = _tmp117 * _tmp92;
  const Scalar _tmp203 = _tmp118 * sqrt_info(5, 2);
  const Scalar _tmp204 = _tmp118 * sqrt_info(5, 1);
  const Scalar _tmp205 = -_tmp95 - _tmp96 + _tmp97 + _tmp98;
  const Scalar _tmp206 = _tmp106 + _tmp170 + _tmp205 * _x_T_y[1] + _tmp94;
  const Scalar _tmp207 = _tmp126 * _tmp206;
  const Scalar _tmp208 = _tmp118 * (-_tmp136 + _tmp138 + _tmp172 + _tmp205 * _x_T_y[2]);
  const Scalar _tmp209 = _tmp128 * _tmp206;
  const Scalar _tmp210 = _tmp209 * _tmp88;
  const Scalar _tmp211 = _tmp141 * _tmp206;
  const Scalar _tmp212 = _tmp132 - _tmp134 + _tmp179 - _tmp205 * _x_T_y[0];
  const Scalar _tmp213 = _tmp118 * _tmp212;
  const Scalar _tmp214 = _tmp182 * _tmp206;
  const Scalar _tmp215 = _tmp121 - _tmp123 + _tmp167 + _tmp205 * _x_T_y[3];
  const Scalar _tmp216 = _tmp145 + _tmp153 + _tmp186 + _tmp63;
  const Scalar _tmp217 = -_tmp216 * _x[5] + _tmp216 * _y[5] - _tmp50 - _tmp54 + _tmp55;
  const Scalar _tmp218 = _tmp143 + _tmp48;
  const Scalar _tmp219 = _tmp184 + _tmp68;
  const Scalar _tmp220 = _tmp154 + _tmp188;
  const Scalar _tmp221 = -_tmp218 * _x[5] + _tmp218 * _y[5] - _tmp219 * _x[6] + _tmp219 * _y[6] -
                         _tmp220 * _x[4] + _tmp220 * _y[4];
  const Scalar _tmp222 = _tmp207 * _tmp61;
  const Scalar _tmp223 = _tmp195 * _tmp206;
  const Scalar _tmp224 = _tmp118 * _tmp215;
  const Scalar _tmp225 = _tmp207 * _tmp88;
  const Scalar _tmp226 = _tmp182 * sqrt_info(5, 0);
  const Scalar _tmp227 = _tmp38 + _tmp64 - 1;
  const Scalar _tmp228 = _tmp41 - 1;
  const Scalar _tmp229 = _tmp228 + _tmp38;
  const Scalar _tmp230 = _tmp228 + _tmp64;
  const Scalar _tmp231 = (Scalar(1) / Scalar(2)) * _tmp84;
  const Scalar _tmp232 = (Scalar(1) / Scalar(2)) * _tmp85;
  const Scalar _tmp233 = (Scalar(1) / Scalar(2)) * _tmp86;
  const Scalar _tmp234 = (Scalar(1) / Scalar(2)) * _tmp87;
  const Scalar _tmp235 = -_tmp231 + _tmp232 + _tmp233 - _tmp234;
  const Scalar _tmp236 = (Scalar(1) / Scalar(2)) * _tmp5;
  const Scalar _tmp237 = (Scalar(1) / Scalar(2)) * _tmp11;
  const Scalar _tmp238 = (Scalar(1) / Scalar(2)) * _tmp17;
  const Scalar _tmp239 = (Scalar(1) / Scalar(2)) * _tmp23;
  const Scalar _tmp240 = -_tmp236 - _tmp237 + _tmp238 + _tmp239;
  const Scalar _tmp241 = _tmp128 * _tmp240;
  const Scalar _tmp242 = _tmp182 * _tmp240;
  const Scalar _tmp243 = _tmp126 * _tmp240;
  const Scalar _tmp244 = _tmp243 * _tmp88;
  const Scalar _tmp245 = _tmp141 * _tmp240;
  const Scalar _tmp246 = _tmp241 * _tmp88;
  const Scalar _tmp247 = (Scalar(1) / Scalar(2)) * _tmp57;
  const Scalar _tmp248 = (Scalar(1) / Scalar(2)) * _tmp58;
  const Scalar _tmp249 = (Scalar(1) / Scalar(2)) * _tmp59;
  const Scalar _tmp250 = (Scalar(1) / Scalar(2)) * _tmp60;
  const Scalar _tmp251 = _tmp247 - _tmp248 + _tmp249 - _tmp250;
  const Scalar _tmp252 = _tmp118 * _tmp251;
  const Scalar _tmp253 = -Scalar(1) / Scalar(2) * _tmp25 - Scalar(1) / Scalar(2) * _tmp26 -
                         Scalar(1) / Scalar(2) * _tmp27 - Scalar(1) / Scalar(2) * _tmp29;
  const Scalar _tmp254 = _tmp118 * _tmp253;
  const Scalar _tmp255 = _tmp118 * _tmp235;
  const Scalar _tmp256 = _tmp195 * _tmp240;
  const Scalar _tmp257 = _tmp243 * _tmp61;
  const Scalar _tmp258 = -_tmp247 + _tmp248 - _tmp249 + _tmp250;
  const Scalar _tmp259 = _tmp126 * _tmp258;
  const Scalar _tmp260 = _tmp141 * _tmp258;
  const Scalar _tmp261 = _tmp118 * (_tmp231 - _tmp232 - _tmp233 + _tmp234);
  const Scalar _tmp262 = _tmp128 * _tmp258;
  const Scalar _tmp263 = _tmp118 * _tmp240;
  const Scalar _tmp264 = _tmp182 * _tmp258;
  const Scalar _tmp265 = _tmp262 * _tmp88;
  const Scalar _tmp266 = _tmp195 * _tmp258;
  const Scalar _tmp267 = _tmp259 * _tmp61;
  const Scalar _tmp268 = _tmp259 * _tmp88;
  const Scalar _tmp269 = _tmp128 * _tmp235;
  const Scalar _tmp270 = _tmp126 * _tmp235;
  const Scalar _tmp271 = _tmp270 * _tmp88;
  const Scalar _tmp272 = _tmp236 + _tmp237 - _tmp238 - _tmp239;
  const Scalar _tmp273 = _tmp118 * _tmp258;
  const Scalar _tmp274 = _tmp182 * _tmp235;
  const Scalar _tmp275 = _tmp269 * _tmp88;
  const Scalar _tmp276 = _tmp141 * _tmp235;
  const Scalar _tmp277 = _tmp195 * _tmp235;
  const Scalar _tmp278 = _tmp118 * _tmp272;
  const Scalar _tmp279 = _tmp270 * _tmp61;

  // Output terms (3)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp35 * _tmp62 + _tmp36 * sqrt_info(0, 0) + _tmp56 * sqrt_info(0, 4) +
               _tmp75 * sqrt_info(0, 5) + _tmp83 * sqrt_info(0, 3) + _tmp90 * sqrt_info(0, 2);
  _res(1, 0) = _tmp36 * sqrt_info(1, 0) + _tmp56 * sqrt_info(1, 4) + _tmp75 * sqrt_info(1, 5) +
               _tmp83 * sqrt_info(1, 3) + _tmp90 * sqrt_info(1, 2) + _tmp91 * sqrt_info(1, 1);
  _res(2, 0) = _tmp36 * sqrt_info(2, 0) + _tmp56 * sqrt_info(2, 4) + _tmp75 * sqrt_info(2, 5) +
               _tmp83 * sqrt_info(2, 3) + _tmp90 * sqrt_info(2, 2) + _tmp91 * sqrt_info(2, 1);
  _res(3, 0) = _tmp36 * sqrt_info(3, 0) + _tmp56 * sqrt_info(3, 4) + _tmp75 * sqrt_info(3, 5) +
               _tmp83 * sqrt_info(3, 3) + _tmp90 * sqrt_info(3, 2) + _tmp91 * sqrt_info(3, 1);
  _res(4, 0) = _tmp36 * sqrt_info(4, 0) + _tmp56 * sqrt_info(4, 4) + _tmp75 * sqrt_info(4, 5) +
               _tmp83 * sqrt_info(4, 3) + _tmp89 * _tmp92 + _tmp91 * sqrt_info(4, 1);
  _res(5, 0) = _tmp36 * sqrt_info(5, 0) + _tmp56 * sqrt_info(5, 4) + _tmp75 * sqrt_info(5, 5) +
               _tmp83 * sqrt_info(5, 3) + _tmp90 * sqrt_info(5, 2) + _tmp91 * sqrt_info(5, 1);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 6, 6>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp119 * sqrt_info(0, 1) + _tmp120 * _tmp127 + _tmp127 * _tmp62 -
                     _tmp129 * _tmp62 - _tmp130 * sqrt_info(0, 2) - _tmp131 * sqrt_info(0, 0) +
                     _tmp135 * sqrt_info(0, 0) + _tmp140 * sqrt_info(0, 2) +
                     _tmp142 * sqrt_info(0, 0) + _tmp151 * sqrt_info(0, 5) +
                     _tmp156 * sqrt_info(0, 4);
    _res_D_x(1, 0) = _tmp119 * sqrt_info(1, 1) + _tmp127 * _tmp157 - _tmp129 * _tmp157 -
                     _tmp131 * sqrt_info(1, 0) + _tmp135 * sqrt_info(1, 0) +
                     _tmp140 * sqrt_info(1, 2) + _tmp142 * sqrt_info(1, 0) +
                     _tmp151 * sqrt_info(1, 5) + _tmp156 * sqrt_info(1, 4) -
                     _tmp158 * sqrt_info(1, 1) + _tmp159 * sqrt_info(1, 1);
    _res_D_x(2, 0) =
        _tmp119 * sqrt_info(2, 1) - _tmp130 * sqrt_info(2, 2) - _tmp131 * sqrt_info(2, 0) +
        _tmp135 * sqrt_info(2, 0) + _tmp140 * sqrt_info(2, 2) + _tmp142 * sqrt_info(2, 0) +
        _tmp151 * sqrt_info(2, 5) + _tmp156 * sqrt_info(2, 4) - _tmp158 * sqrt_info(2, 1) +
        _tmp159 * sqrt_info(2, 1) + _tmp160 * sqrt_info(2, 2);
    _res_D_x(3, 0) = _tmp119 * sqrt_info(3, 1) + _tmp127 * _tmp161 - _tmp130 * sqrt_info(3, 2) -
                     _tmp131 * sqrt_info(3, 0) + _tmp135 * sqrt_info(3, 0) +
                     _tmp140 * sqrt_info(3, 2) + _tmp142 * sqrt_info(3, 0) +
                     _tmp151 * sqrt_info(3, 5) + _tmp156 * sqrt_info(3, 4) -
                     _tmp158 * sqrt_info(3, 1) + _tmp159 * sqrt_info(3, 1);
    _res_D_x(4, 0) = _tmp119 * sqrt_info(4, 1) + _tmp127 * _tmp162 - _tmp130 * sqrt_info(4, 2) -
                     _tmp131 * sqrt_info(4, 0) + _tmp135 * sqrt_info(4, 0) + _tmp139 * _tmp92 +
                     _tmp142 * sqrt_info(4, 0) + _tmp151 * sqrt_info(4, 5) +
                     _tmp156 * sqrt_info(4, 4) - _tmp158 * sqrt_info(4, 1) +
                     _tmp160 * sqrt_info(4, 2);
    _res_D_x(5, 0) = _tmp119 * sqrt_info(5, 1) + _tmp127 * _tmp163 + _tmp127 * _tmp164 -
                     _tmp130 * sqrt_info(5, 2) - _tmp131 * sqrt_info(5, 0) +
                     _tmp135 * sqrt_info(5, 0) + _tmp140 * sqrt_info(5, 2) +
                     _tmp142 * sqrt_info(5, 0) + _tmp151 * sqrt_info(5, 5) +
                     _tmp156 * sqrt_info(5, 4) - _tmp158 * sqrt_info(5, 1);
    _res_D_x(0, 1) = _tmp169 * sqrt_info(0, 2) + _tmp171 * sqrt_info(0, 0) + _tmp174 * _tmp62 +
                     _tmp175 * sqrt_info(0, 2) - _tmp176 * _tmp62 - _tmp177 * sqrt_info(0, 2) +
                     _tmp178 * sqrt_info(0, 0) + _tmp180 * _tmp181 - _tmp183 * sqrt_info(0, 0) +
                     _tmp191 * sqrt_info(0, 3) + _tmp193 * sqrt_info(0, 5);
    _res_D_x(1, 1) = _tmp157 * _tmp174 - _tmp157 * _tmp176 + _tmp169 * sqrt_info(1, 2) +
                     _tmp171 * sqrt_info(1, 0) + _tmp178 * sqrt_info(1, 0) -
                     _tmp183 * sqrt_info(1, 0) + _tmp191 * sqrt_info(1, 3) +
                     _tmp193 * sqrt_info(1, 5) + _tmp194 * sqrt_info(1, 1) -
                     _tmp196 * sqrt_info(1, 1) + _tmp197 * sqrt_info(1, 1);
    _res_D_x(2, 1) = _tmp168 * _tmp198 + _tmp171 * sqrt_info(2, 0) - _tmp173 * _tmp199 +
                     _tmp175 * sqrt_info(2, 2) - _tmp177 * sqrt_info(2, 2) +
                     _tmp178 * sqrt_info(2, 0) - _tmp183 * sqrt_info(2, 0) +
                     _tmp191 * sqrt_info(2, 3) + _tmp193 * sqrt_info(2, 5) +
                     _tmp194 * sqrt_info(2, 1) + _tmp197 * sqrt_info(2, 1);
    _res_D_x(3, 1) = _tmp161 * _tmp174 - _tmp161 * _tmp176 + _tmp168 * _tmp200 +
                     _tmp171 * sqrt_info(3, 0) - _tmp173 * _tmp201 + _tmp178 * sqrt_info(3, 0) -
                     _tmp183 * sqrt_info(3, 0) + _tmp191 * sqrt_info(3, 3) +
                     _tmp193 * sqrt_info(3, 5) + _tmp194 * sqrt_info(3, 1) +
                     _tmp197 * sqrt_info(3, 1);
    _res_D_x(4, 1) = _tmp162 * _tmp174 + _tmp168 * _tmp202 + _tmp171 * sqrt_info(4, 0) +
                     _tmp175 * sqrt_info(4, 2) - _tmp177 * sqrt_info(4, 2) +
                     _tmp178 * sqrt_info(4, 0) - _tmp183 * sqrt_info(4, 0) +
                     _tmp191 * sqrt_info(4, 3) + _tmp193 * sqrt_info(4, 5) -
                     _tmp196 * sqrt_info(4, 1) + _tmp197 * sqrt_info(4, 1);
    _res_D_x(5, 1) = _tmp163 * _tmp174 - _tmp163 * _tmp176 + _tmp164 * _tmp174 + _tmp168 * _tmp203 +
                     _tmp171 * sqrt_info(5, 0) + _tmp178 * sqrt_info(5, 0) + _tmp180 * _tmp204 -
                     _tmp183 * sqrt_info(5, 0) + _tmp191 * sqrt_info(5, 3) +
                     _tmp193 * sqrt_info(5, 5) - _tmp196 * sqrt_info(5, 1);
    _res_D_x(0, 2) = _tmp120 * _tmp207 + _tmp181 * _tmp215 + _tmp207 * _tmp62 +
                     _tmp208 * sqrt_info(0, 0) - _tmp209 * _tmp62 - _tmp210 * sqrt_info(0, 2) +
                     _tmp211 * sqrt_info(0, 0) + _tmp213 * sqrt_info(0, 2) -
                     _tmp214 * sqrt_info(0, 0) + _tmp217 * sqrt_info(0, 3) +
                     _tmp221 * sqrt_info(0, 4);
    _res_D_x(1, 2) = _tmp157 * _tmp207 - _tmp157 * _tmp209 + _tmp208 * sqrt_info(1, 0) +
                     _tmp211 * sqrt_info(1, 0) + _tmp213 * sqrt_info(1, 2) -
                     _tmp214 * sqrt_info(1, 0) + _tmp217 * sqrt_info(1, 3) +
                     _tmp221 * sqrt_info(1, 4) + _tmp222 * sqrt_info(1, 1) -
                     _tmp223 * sqrt_info(1, 1) + _tmp224 * sqrt_info(1, 1);
    _res_D_x(2, 2) = _tmp198 * _tmp212 + _tmp208 * sqrt_info(2, 0) - _tmp210 * sqrt_info(2, 2) +
                     _tmp211 * sqrt_info(2, 0) - _tmp214 * sqrt_info(2, 0) +
                     _tmp217 * sqrt_info(2, 3) + _tmp221 * sqrt_info(2, 4) +
                     _tmp222 * sqrt_info(2, 1) - _tmp223 * sqrt_info(2, 1) +
                     _tmp224 * sqrt_info(2, 1) + _tmp225 * sqrt_info(2, 2);
    _res_D_x(3, 2) = _tmp161 * _tmp207 - _tmp161 * _tmp209 + _tmp200 * _tmp212 - _tmp201 * _tmp206 +
                     _tmp208 * sqrt_info(3, 0) + _tmp211 * sqrt_info(3, 0) -
                     _tmp214 * sqrt_info(3, 0) + _tmp217 * sqrt_info(3, 3) +
                     _tmp221 * sqrt_info(3, 4) + _tmp222 * sqrt_info(3, 1) +
                     _tmp224 * sqrt_info(3, 1);
    _res_D_x(4, 2) = _tmp162 * _tmp207 + _tmp202 * _tmp212 + _tmp208 * sqrt_info(4, 0) -
                     _tmp210 * sqrt_info(4, 2) + _tmp211 * sqrt_info(4, 0) -
                     _tmp214 * sqrt_info(4, 0) + _tmp217 * sqrt_info(4, 3) +
                     _tmp221 * sqrt_info(4, 4) - _tmp223 * sqrt_info(4, 1) +
                     _tmp224 * sqrt_info(4, 1) + _tmp225 * sqrt_info(4, 2);
    _res_D_x(5, 2) = _tmp163 * _tmp207 - _tmp163 * _tmp209 + _tmp203 * _tmp212 + _tmp204 * _tmp215 -
                     _tmp206 * _tmp226 + _tmp208 * sqrt_info(5, 0) + _tmp211 * sqrt_info(5, 0) +
                     _tmp217 * sqrt_info(5, 3) + _tmp221 * sqrt_info(5, 4) +
                     _tmp222 * sqrt_info(5, 1) - _tmp223 * sqrt_info(5, 1);
    _res_D_x(0, 3) =
        _tmp144 * sqrt_info(0, 4) + _tmp185 * sqrt_info(0, 5) + _tmp227 * sqrt_info(0, 3);
    _res_D_x(1, 3) =
        _tmp144 * sqrt_info(1, 4) + _tmp185 * sqrt_info(1, 5) + _tmp227 * sqrt_info(1, 3);
    _res_D_x(2, 3) =
        _tmp144 * sqrt_info(2, 4) + _tmp185 * sqrt_info(2, 5) + _tmp227 * sqrt_info(2, 3);
    _res_D_x(3, 3) =
        _tmp144 * sqrt_info(3, 4) + _tmp185 * sqrt_info(3, 5) + _tmp227 * sqrt_info(3, 3);
    _res_D_x(4, 3) =
        _tmp144 * sqrt_info(4, 4) + _tmp185 * sqrt_info(4, 5) + _tmp227 * sqrt_info(4, 3);
    _res_D_x(5, 3) =
        _tmp144 * sqrt_info(5, 4) + _tmp185 * sqrt_info(5, 5) + _tmp227 * sqrt_info(5, 3);
    _res_D_x(0, 4) =
        _tmp190 * sqrt_info(0, 5) + _tmp218 * sqrt_info(0, 3) + _tmp229 * sqrt_info(0, 4);
    _res_D_x(1, 4) =
        _tmp190 * sqrt_info(1, 5) + _tmp218 * sqrt_info(1, 3) + _tmp229 * sqrt_info(1, 4);
    _res_D_x(2, 4) =
        _tmp190 * sqrt_info(2, 5) + _tmp218 * sqrt_info(2, 3) + _tmp229 * sqrt_info(2, 4);
    _res_D_x(3, 4) =
        _tmp190 * sqrt_info(3, 5) + _tmp218 * sqrt_info(3, 3) + _tmp229 * sqrt_info(3, 4);
    _res_D_x(4, 4) =
        _tmp190 * sqrt_info(4, 5) + _tmp218 * sqrt_info(4, 3) + _tmp229 * sqrt_info(4, 4);
    _res_D_x(5, 4) =
        _tmp190 * sqrt_info(5, 5) + _tmp218 * sqrt_info(5, 3) + _tmp229 * sqrt_info(5, 4);
    _res_D_x(0, 5) =
        _tmp150 * sqrt_info(0, 4) + _tmp219 * sqrt_info(0, 3) + _tmp230 * sqrt_info(0, 5);
    _res_D_x(1, 5) =
        _tmp150 * sqrt_info(1, 4) + _tmp219 * sqrt_info(1, 3) + _tmp230 * sqrt_info(1, 5);
    _res_D_x(2, 5) =
        _tmp150 * sqrt_info(2, 4) + _tmp219 * sqrt_info(2, 3) + _tmp230 * sqrt_info(2, 5);
    _res_D_x(3, 5) =
        _tmp150 * sqrt_info(3, 4) + _tmp219 * sqrt_info(3, 3) + _tmp230 * sqrt_info(3, 5);
    _res_D_x(4, 5) =
        _tmp150 * sqrt_info(4, 4) + _tmp219 * sqrt_info(4, 3) + _tmp230 * sqrt_info(4, 5);
    _res_D_x(5, 5) =
        _tmp150 * sqrt_info(5, 4) + _tmp219 * sqrt_info(5, 3) + _tmp230 * sqrt_info(5, 5);
  }

  if (res_D_x_T_y != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 6, 6>> _res_D_x_T_y{res_D_x_T_y};

    _res_D_x_T_y(0, 0) = _tmp181 * _tmp235 - _tmp241 * _tmp62 - _tmp242 * sqrt_info(0, 0) +
                         _tmp243 * _tmp62 + _tmp244 * sqrt_info(0, 2) + _tmp245 * sqrt_info(0, 0) -
                         _tmp246 * sqrt_info(0, 2) + _tmp252 * sqrt_info(0, 2) +
                         _tmp254 * sqrt_info(0, 0);
    _res_D_x_T_y(1, 0) = -_tmp157 * _tmp241 + _tmp157 * _tmp243 - _tmp242 * sqrt_info(1, 0) +
                         _tmp245 * sqrt_info(1, 0) + _tmp252 * sqrt_info(1, 2) +
                         _tmp254 * sqrt_info(1, 0) + _tmp255 * sqrt_info(1, 1) -
                         _tmp256 * sqrt_info(1, 1) + _tmp257 * sqrt_info(1, 1);
    _res_D_x_T_y(2, 0) = _tmp198 * _tmp251 - _tmp242 * sqrt_info(2, 0) + _tmp244 * sqrt_info(2, 2) +
                         _tmp245 * sqrt_info(2, 0) - _tmp246 * sqrt_info(2, 2) +
                         _tmp254 * sqrt_info(2, 0) + _tmp255 * sqrt_info(2, 1) -
                         _tmp256 * sqrt_info(2, 1) + _tmp257 * sqrt_info(2, 1);
    _res_D_x_T_y(3, 0) = -_tmp161 * _tmp241 + _tmp161 * _tmp243 + _tmp200 * _tmp251 -
                         _tmp201 * _tmp240 - _tmp242 * sqrt_info(3, 0) + _tmp245 * sqrt_info(3, 0) +
                         _tmp254 * sqrt_info(3, 0) + _tmp255 * sqrt_info(3, 1) +
                         _tmp257 * sqrt_info(3, 1);
    _res_D_x_T_y(4, 0) = _tmp202 * _tmp251 - _tmp242 * sqrt_info(4, 0) + _tmp244 * sqrt_info(4, 2) +
                         _tmp245 * sqrt_info(4, 0) - _tmp246 * sqrt_info(4, 2) +
                         _tmp254 * sqrt_info(4, 0) + _tmp255 * sqrt_info(4, 1) -
                         _tmp256 * sqrt_info(4, 1) + _tmp257 * sqrt_info(4, 1);
    _res_D_x_T_y(5, 0) = -_tmp163 * _tmp241 + _tmp163 * _tmp243 + _tmp203 * _tmp251 +
                         _tmp204 * _tmp235 - _tmp242 * sqrt_info(5, 0) + _tmp245 * sqrt_info(5, 0) +
                         _tmp254 * sqrt_info(5, 0) - _tmp256 * sqrt_info(5, 1) +
                         _tmp257 * sqrt_info(5, 1);
    _res_D_x_T_y(0, 1) = _tmp120 * _tmp259 + _tmp181 * _tmp253 + _tmp259 * _tmp62 +
                         _tmp260 * sqrt_info(0, 0) + _tmp261 * sqrt_info(0, 0) - _tmp262 * _tmp62 +
                         _tmp263 * sqrt_info(0, 2) - _tmp264 * sqrt_info(0, 0) -
                         _tmp265 * sqrt_info(0, 2);
    _res_D_x_T_y(1, 1) = _tmp157 * _tmp259 - _tmp157 * _tmp262 + _tmp254 * sqrt_info(1, 1) +
                         _tmp260 * sqrt_info(1, 0) + _tmp261 * sqrt_info(1, 0) +
                         _tmp263 * sqrt_info(1, 2) - _tmp264 * sqrt_info(1, 0) -
                         _tmp266 * sqrt_info(1, 1) + _tmp267 * sqrt_info(1, 1);
    _res_D_x_T_y(2, 1) = _tmp198 * _tmp240 - _tmp199 * _tmp258 + _tmp254 * sqrt_info(2, 1) +
                         _tmp260 * sqrt_info(2, 0) + _tmp261 * sqrt_info(2, 0) -
                         _tmp264 * sqrt_info(2, 0) - _tmp265 * sqrt_info(2, 2) +
                         _tmp267 * sqrt_info(2, 1) + _tmp268 * sqrt_info(2, 2);
    _res_D_x_T_y(3, 1) = _tmp161 * _tmp259 - _tmp161 * _tmp262 + _tmp200 * _tmp240 -
                         _tmp201 * _tmp258 + _tmp254 * sqrt_info(3, 1) + _tmp260 * sqrt_info(3, 0) +
                         _tmp261 * sqrt_info(3, 0) - _tmp264 * sqrt_info(3, 0) +
                         _tmp267 * sqrt_info(3, 1);
    _res_D_x_T_y(4, 1) = _tmp162 * _tmp259 + _tmp202 * _tmp240 + _tmp254 * sqrt_info(4, 1) +
                         _tmp260 * sqrt_info(4, 0) + _tmp261 * sqrt_info(4, 0) -
                         _tmp264 * sqrt_info(4, 0) - _tmp265 * sqrt_info(4, 2) -
                         _tmp266 * sqrt_info(4, 1) + _tmp268 * sqrt_info(4, 2);
    _res_D_x_T_y(5, 1) = _tmp163 * _tmp259 - _tmp163 * _tmp262 + _tmp164 * _tmp259 +
                         _tmp203 * _tmp240 + _tmp204 * _tmp253 - _tmp226 * _tmp258 +
                         _tmp260 * sqrt_info(5, 0) + _tmp261 * sqrt_info(5, 0) -
                         _tmp266 * sqrt_info(5, 1);
    _res_D_x_T_y(0, 2) = _tmp181 * _tmp272 + _tmp254 * sqrt_info(0, 2) - _tmp269 * _tmp62 +
                         _tmp270 * _tmp62 + _tmp271 * sqrt_info(0, 2) + _tmp273 * sqrt_info(0, 0) -
                         _tmp274 * sqrt_info(0, 0) - _tmp275 * sqrt_info(0, 2) +
                         _tmp276 * sqrt_info(0, 0);
    _res_D_x_T_y(1, 2) = -_tmp157 * _tmp269 + _tmp157 * _tmp270 + _tmp254 * sqrt_info(1, 2) +
                         _tmp273 * sqrt_info(1, 0) - _tmp274 * sqrt_info(1, 0) +
                         _tmp276 * sqrt_info(1, 0) - _tmp277 * sqrt_info(1, 1) +
                         _tmp278 * sqrt_info(1, 1) + _tmp279 * sqrt_info(1, 1);
    _res_D_x_T_y(2, 2) = _tmp198 * _tmp253 - _tmp199 * _tmp235 + _tmp271 * sqrt_info(2, 2) +
                         _tmp273 * sqrt_info(2, 0) - _tmp274 * sqrt_info(2, 0) -
                         _tmp275 * sqrt_info(2, 2) + _tmp276 * sqrt_info(2, 0) +
                         _tmp278 * sqrt_info(2, 1) + _tmp279 * sqrt_info(2, 1);
    _res_D_x_T_y(3, 2) = -_tmp161 * _tmp269 + _tmp161 * _tmp270 + _tmp200 * _tmp253 -
                         _tmp201 * _tmp235 + _tmp273 * sqrt_info(3, 0) - _tmp274 * sqrt_info(3, 0) +
                         _tmp276 * sqrt_info(3, 0) + _tmp278 * sqrt_info(3, 1) +
                         _tmp279 * sqrt_info(3, 1);
    _res_D_x_T_y(4, 2) = _tmp162 * _tmp270 + _tmp202 * _tmp253 + _tmp271 * sqrt_info(4, 2) +
                         _tmp273 * sqrt_info(4, 0) - _tmp274 * sqrt_info(4, 0) -
                         _tmp275 * sqrt_info(4, 2) + _tmp276 * sqrt_info(4, 0) -
                         _tmp277 * sqrt_info(4, 1) + _tmp278 * sqrt_info(4, 1);
    _res_D_x_T_y(5, 2) = -_tmp163 * _tmp269 + _tmp163 * _tmp270 + _tmp164 * _tmp270 +
                         _tmp203 * _tmp253 + _tmp204 * _tmp272 - _tmp226 * _tmp235 +
                         _tmp273 * sqrt_info(5, 0) + _tmp276 * sqrt_info(5, 0) -
                         _tmp277 * sqrt_info(5, 1);
    _res_D_x_T_y(0, 3) = -sqrt_info(0, 3);
    _res_D_x_T_y(1, 3) = -sqrt_info(1, 3);
    _res_D_x_T_y(2, 3) = -sqrt_info(2, 3);
    _res_D_x_T_y(3, 3) = -sqrt_info(3, 3);
    _res_D_x_T_y(4, 3) = -sqrt_info(4, 3);
    _res_D_x_T_y(5, 3) = -sqrt_info(5, 3);
    _res_D_x_T_y(0, 4) = -sqrt_info(0, 4);
    _res_D_x_T_y(1, 4) = -sqrt_info(1, 4);
    _res_D_x_T_y(2, 4) = -sqrt_info(2, 4);
    _res_D_x_T_y(3, 4) = -sqrt_info(3, 4);
    _res_D_x_T_y(4, 4) = -sqrt_info(4, 4);
    _res_D_x_T_y(5, 4) = -sqrt_info(5, 4);
    _res_D_x_T_y(0, 5) = -sqrt_info(0, 5);
    _res_D_x_T_y(1, 5) = -sqrt_info(1, 5);
    _res_D_x_T_y(2, 5) = -sqrt_info(2, 5);
    _res_D_x_T_y(3, 5) = -sqrt_info(3, 5);
    _res_D_x_T_y(4, 5) = -sqrt_info(4, 5);
    _res_D_x_T_y(5, 5) = -sqrt_info(5, 5);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
