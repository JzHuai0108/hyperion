// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/pose3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline4_pose3_acceleration
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix43
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     x4: Pose3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix61
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Spline4Pose3AccelerationLocal(
    const Scalar dt, const Eigen::Matrix<Scalar, 4, 3>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Pose3<Scalar>& x4, const Scalar epsilon) {
  // Total ops: 799

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x4 = x4.Data();

  // Intermediate terms (266)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));
  const Scalar _tmp1 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp2 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp3 = std::pow(_tmp1, Scalar(2));
  const Scalar _tmp4 = 1 - epsilon;
  const Scalar _tmp5 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp6 = _x2[3] * _x3[3];
  const Scalar _tmp7 = std::min<Scalar>(_tmp4, std::fabs(_tmp5 - _tmp6));
  const Scalar _tmp8 = 1 - std::pow(_tmp7, Scalar(2));
  const Scalar _tmp9 =
      2 * std::min<Scalar>(0, (((-_tmp5 + _tmp6) > 0) - ((-_tmp5 + _tmp6) < 0))) + 1;
  const Scalar _tmp10 = std::acos(_tmp7);
  const Scalar _tmp11 = std::pow(_tmp10, Scalar(2)) * std::pow(_tmp9, Scalar(2)) *
                        std::pow(lambdas(2, 0), Scalar(2)) / _tmp8;
  const Scalar _tmp12 = 4 * _tmp11;
  const Scalar _tmp13 = std::pow(_tmp2, Scalar(2));
  const Scalar _tmp14 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp15 = std::pow(_tmp14, Scalar(2));
  const Scalar _tmp16 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp17 = _tmp12 * _tmp13 + _tmp12 * _tmp15 + _tmp12 * _tmp3 + _tmp16;
  const Scalar _tmp18 = std::sqrt(_tmp17);
  const Scalar _tmp19 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp20 = std::sin(_tmp19);
  const Scalar _tmp21 = 8 * _tmp11 * std::pow(_tmp20, Scalar(2)) / _tmp17;
  const Scalar _tmp22 = _tmp2 * _tmp21;
  const Scalar _tmp23 = _tmp1 * _tmp22;
  const Scalar _tmp24 = std::cos(_tmp19);
  const Scalar _tmp25 = _tmp10 * _tmp9 / std::sqrt(_tmp8);
  const Scalar _tmp26 = _tmp20 * lambdas(2, 0) / _tmp18;
  const Scalar _tmp27 = 4 * _tmp24 * _tmp25 * _tmp26;
  const Scalar _tmp28 = _tmp14 * _tmp27;
  const Scalar _tmp29 = _tmp23 + _tmp28;
  const Scalar _tmp30 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp31 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp32 = _x1[3] * _x2[3];
  const Scalar _tmp33 = std::min<Scalar>(_tmp4, std::fabs(_tmp31 - _tmp32));
  const Scalar _tmp34 = 1 - std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 =
      2 * std::min<Scalar>(0, (((-_tmp31 + _tmp32) > 0) - ((-_tmp31 + _tmp32) < 0))) + 1;
  const Scalar _tmp36 = std::acos(_tmp33);
  const Scalar _tmp37 = _tmp35 * _tmp36 / std::sqrt(_tmp34);
  const Scalar _tmp38 = 2 * _tmp37;
  const Scalar _tmp39 = _tmp30 * _tmp38;
  const Scalar _tmp40 = _tmp39 * lambdas(1, 1);
  const Scalar _tmp41 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp42 = _x0[3] * _x1[3];
  const Scalar _tmp43 =
      2 * std::min<Scalar>(0, (((-_tmp41 + _tmp42) > 0) - ((-_tmp41 + _tmp42) < 0))) + 1;
  const Scalar _tmp44 = std::min<Scalar>(_tmp4, std::fabs(_tmp41 - _tmp42));
  const Scalar _tmp45 = std::acos(_tmp44);
  const Scalar _tmp46 = 1 - std::pow(_tmp44, Scalar(2));
  const Scalar _tmp47 = 2 * _tmp43 * _tmp45 / std::sqrt(_tmp46);
  const Scalar _tmp48 = _tmp47 * lambdas(0, 1);
  const Scalar _tmp49 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp50 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp51 = std::pow(_tmp50, Scalar(2));
  const Scalar _tmp52 = std::pow(_tmp35, Scalar(2)) * std::pow(_tmp36, Scalar(2)) *
                        std::pow(lambdas(1, 0), Scalar(2)) / _tmp34;
  const Scalar _tmp53 = 4 * _tmp52;
  const Scalar _tmp54 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp55 = std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = std::pow(_tmp30, Scalar(2));
  const Scalar _tmp57 = _tmp16 + _tmp51 * _tmp53 + _tmp53 * _tmp55 + _tmp53 * _tmp56;
  const Scalar _tmp58 = std::sqrt(_tmp57);
  const Scalar _tmp59 = (Scalar(1) / Scalar(2)) * _tmp58;
  const Scalar _tmp60 = std::sin(_tmp59);
  const Scalar _tmp61 = 8 * _tmp52 * std::pow(_tmp60, Scalar(2)) / _tmp57;
  const Scalar _tmp62 = _tmp30 * _tmp61;
  const Scalar _tmp63 = _tmp50 * _tmp62;
  const Scalar _tmp64 = std::cos(_tmp59);
  const Scalar _tmp65 = _tmp60 * lambdas(1, 0) / _tmp58;
  const Scalar _tmp66 = 4 * _tmp37 * _tmp64 * _tmp65;
  const Scalar _tmp67 = _tmp54 * _tmp66;
  const Scalar _tmp68 = _tmp49 * (_tmp63 - _tmp67);
  const Scalar _tmp69 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp70 = _tmp54 * _tmp62;
  const Scalar _tmp71 = _tmp50 * _tmp66;
  const Scalar _tmp72 = _tmp69 * (_tmp70 + _tmp71);
  const Scalar _tmp73 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp74 = -_tmp51 * _tmp61;
  const Scalar _tmp75 = -_tmp55 * _tmp61 + 1;
  const Scalar _tmp76 = _tmp73 * (_tmp74 + _tmp75);
  const Scalar _tmp77 = _tmp48 * _tmp68 + _tmp48 * _tmp72 + _tmp48 * _tmp76;
  const Scalar _tmp78 = _tmp40 + _tmp77;
  const Scalar _tmp79 = _tmp38 * _tmp50;
  const Scalar _tmp80 = _tmp79 * lambdas(1, 1);
  const Scalar _tmp81 = _tmp30 * _tmp66;
  const Scalar _tmp82 = _tmp50 * _tmp54 * _tmp61;
  const Scalar _tmp83 = _tmp69 * (-_tmp81 + _tmp82);
  const Scalar _tmp84 = -_tmp56 * _tmp61;
  const Scalar _tmp85 = _tmp49 * (_tmp75 + _tmp84);
  const Scalar _tmp86 = _tmp73 * (_tmp63 + _tmp67);
  const Scalar _tmp87 = _tmp48 * _tmp83 + _tmp48 * _tmp85 + _tmp48 * _tmp86;
  const Scalar _tmp88 = _tmp80 + _tmp87;
  const Scalar _tmp89 = -_tmp21 * _tmp3;
  const Scalar _tmp90 = -_tmp15 * _tmp21;
  const Scalar _tmp91 = _tmp89 + _tmp90 + 1;
  const Scalar _tmp92 = _tmp1 * _tmp27;
  const Scalar _tmp93 = _tmp14 * _tmp22;
  const Scalar _tmp94 = -_tmp92 + _tmp93;
  const Scalar _tmp95 = _tmp38 * _tmp54;
  const Scalar _tmp96 = _tmp95 * lambdas(1, 1);
  const Scalar _tmp97 = _tmp69 * (_tmp74 + _tmp84 + 1);
  const Scalar _tmp98 = _tmp49 * (_tmp81 + _tmp82);
  const Scalar _tmp99 = _tmp73 * (_tmp70 - _tmp71);
  const Scalar _tmp100 = _tmp48 * _tmp97 + _tmp48 * _tmp98 + _tmp48 * _tmp99;
  const Scalar _tmp101 = _tmp100 + _tmp96;
  const Scalar _tmp102 = _tmp101 * _tmp94 + _tmp29 * _tmp78 + _tmp88 * _tmp91;
  const Scalar _tmp103 = 2 * _tmp25;
  const Scalar _tmp104 = _tmp1 * _tmp103;
  const Scalar _tmp105 = _tmp104 * lambdas(2, 1);
  const Scalar _tmp106 = _tmp2 * _tmp27;
  const Scalar _tmp107 = _tmp1 * _tmp14 * _tmp21;
  const Scalar _tmp108 = _tmp106 + _tmp107;
  const Scalar _tmp109 = _tmp23 - _tmp28;
  const Scalar _tmp110 = -_tmp13 * _tmp21 + 1;
  const Scalar _tmp111 = _tmp110 + _tmp90;
  const Scalar _tmp112 = _tmp101 * _tmp108 + _tmp109 * _tmp88 + _tmp111 * _tmp78;
  const Scalar _tmp113 = _tmp103 * _tmp2;
  const Scalar _tmp114 = _tmp113 * lambdas(2, 1);
  const Scalar _tmp115 = -_tmp106 + _tmp107;
  const Scalar _tmp116 = _tmp47 * lambdas(0, 2);
  const Scalar _tmp117 = _tmp100 * _tmp80 + _tmp116 * _tmp68 + _tmp116 * _tmp72 + _tmp116 * _tmp76 +
                         _tmp39 * lambdas(1, 2) - _tmp87 * _tmp96;
  const Scalar _tmp118 = _tmp103 * _tmp14;
  const Scalar _tmp119 = -_tmp100 * _tmp40 + _tmp116 * _tmp83 + _tmp116 * _tmp85 +
                         _tmp116 * _tmp86 + _tmp77 * _tmp96 + _tmp79 * lambdas(1, 2);
  const Scalar _tmp120 = _tmp92 + _tmp93;
  const Scalar _tmp121 = _tmp116 * _tmp97 + _tmp116 * _tmp98 + _tmp116 * _tmp99 + _tmp40 * _tmp87 -
                         _tmp77 * _tmp80 + _tmp95 * lambdas(1, 2);
  const Scalar _tmp122 = _tmp110 + _tmp89;
  const Scalar _tmp123 = _tmp102 * _tmp105 - _tmp112 * _tmp114 + _tmp115 * _tmp117 +
                         _tmp118 * lambdas(2, 2) + _tmp119 * _tmp120 + _tmp121 * _tmp122;
  const Scalar _tmp124 = -_x3[0] * _x4[1] + _x3[1] * _x4[0] - _x3[2] * _x4[3] + _x3[3] * _x4[2];
  const Scalar _tmp125 = -_x3[0] * _x4[3] - _x3[1] * _x4[2] + _x3[2] * _x4[1] + _x3[3] * _x4[0];
  const Scalar _tmp126 = std::pow(_tmp125, Scalar(2));
  const Scalar _tmp127 = -_x3[0] * _x4[0] - _x3[1] * _x4[1] - _x3[2] * _x4[2];
  const Scalar _tmp128 = _x3[3] * _x4[3];
  const Scalar _tmp129 = std::min<Scalar>(_tmp4, std::fabs(_tmp127 - _tmp128));
  const Scalar _tmp130 = std::acos(_tmp129);
  const Scalar _tmp131 =
      2 * std::min<Scalar>(0, (((-_tmp127 + _tmp128) > 0) - ((-_tmp127 + _tmp128) < 0))) + 1;
  const Scalar _tmp132 = 1 - std::pow(_tmp129, Scalar(2));
  const Scalar _tmp133 = std::pow(_tmp130, Scalar(2)) * std::pow(_tmp131, Scalar(2)) *
                         std::pow(lambdas(3, 0), Scalar(2)) / _tmp132;
  const Scalar _tmp134 = 4 * _tmp133;
  const Scalar _tmp135 = std::pow(_tmp124, Scalar(2));
  const Scalar _tmp136 = _x3[0] * _x4[2] - _x3[1] * _x4[3] - _x3[2] * _x4[0] + _x3[3] * _x4[1];
  const Scalar _tmp137 = std::pow(_tmp136, Scalar(2));
  const Scalar _tmp138 = _tmp126 * _tmp134 + _tmp134 * _tmp135 + _tmp134 * _tmp137 + _tmp16;
  const Scalar _tmp139 = std::sqrt(_tmp138);
  const Scalar _tmp140 = (Scalar(1) / Scalar(2)) * _tmp139;
  const Scalar _tmp141 = std::sin(_tmp140);
  const Scalar _tmp142 = 8 * _tmp133 * std::pow(_tmp141, Scalar(2)) / _tmp138;
  const Scalar _tmp143 = _tmp125 * _tmp142;
  const Scalar _tmp144 = _tmp124 * _tmp143;
  const Scalar _tmp145 = std::cos(_tmp140);
  const Scalar _tmp146 = _tmp130 * _tmp131 / std::sqrt(_tmp132);
  const Scalar _tmp147 = _tmp141 * lambdas(3, 0) / _tmp139;
  const Scalar _tmp148 = 4 * _tmp145 * _tmp146 * _tmp147;
  const Scalar _tmp149 = _tmp136 * _tmp148;
  const Scalar _tmp150 = _tmp144 - _tmp149;
  const Scalar _tmp151 = 2 * _tmp146;
  const Scalar _tmp152 = _tmp151 * lambdas(3, 2);
  const Scalar _tmp153 = _tmp101 * _tmp122 + _tmp115 * _tmp78 + _tmp120 * _tmp88;
  const Scalar _tmp154 = _tmp118 * lambdas(2, 1);
  const Scalar _tmp155 = -_tmp105 * _tmp153 + _tmp112 * _tmp154 + _tmp113 * lambdas(2, 2) +
                         _tmp117 * _tmp29 + _tmp119 * _tmp91 + _tmp121 * _tmp94;
  const Scalar _tmp156 = -_tmp135 * _tmp142;
  const Scalar _tmp157 = -_tmp137 * _tmp142 + 1;
  const Scalar _tmp158 = _tmp156 + _tmp157;
  const Scalar _tmp159 = _tmp153 + _tmp154;
  const Scalar _tmp160 = _tmp124 * _tmp136 * _tmp142;
  const Scalar _tmp161 = _tmp125 * _tmp148;
  const Scalar _tmp162 = _tmp160 + _tmp161;
  const Scalar _tmp163 = _tmp136 * _tmp143;
  const Scalar _tmp164 = _tmp124 * _tmp148;
  const Scalar _tmp165 = _tmp163 - _tmp164;
  const Scalar _tmp166 = _tmp102 + _tmp114;
  const Scalar _tmp167 = -_tmp126 * _tmp142;
  const Scalar _tmp168 = _tmp156 + _tmp167 + 1;
  const Scalar _tmp169 = _tmp105 + _tmp112;
  const Scalar _tmp170 = _tmp159 * _tmp162 + _tmp165 * _tmp166 + _tmp168 * _tmp169;
  const Scalar _tmp171 = _tmp151 * lambdas(3, 1);
  const Scalar _tmp172 = _tmp124 * _tmp171;
  const Scalar _tmp173 = _tmp163 + _tmp164;
  const Scalar _tmp174 = -_tmp102 * _tmp154 + _tmp104 * lambdas(2, 2) + _tmp108 * _tmp121 +
                         _tmp109 * _tmp119 + _tmp111 * _tmp117 + _tmp114 * _tmp153;
  const Scalar _tmp175 = _tmp157 + _tmp167;
  const Scalar _tmp176 = _tmp144 + _tmp149;
  const Scalar _tmp177 = _tmp160 - _tmp161;
  const Scalar _tmp178 = _tmp159 * _tmp175 + _tmp166 * _tmp176 + _tmp169 * _tmp177;
  const Scalar _tmp179 = _tmp136 * _tmp151;
  const Scalar _tmp180 = _tmp179 * lambdas(3, 1);
  const Scalar _tmp181 = _tmp150 * _tmp159 + _tmp158 * _tmp166 + _tmp169 * _tmp173;
  const Scalar _tmp182 = _tmp125 * _tmp171;
  const Scalar _tmp183 = -_x1[5] + _x2[5];
  const Scalar _tmp184 = -_x3[5] + _x4[5];
  const Scalar _tmp185 = -_x2[5] + _x3[5];
  const Scalar _tmp186 = -_x0[5] + _x1[5];
  const Scalar _tmp187 = _tmp183 * lambdas(1, 2) + _tmp184 * lambdas(3, 2) +
                         _tmp185 * lambdas(2, 2) + _tmp186 * lambdas(0, 2);
  const Scalar _tmp188 = 4 * std::pow(_tmp43, Scalar(2)) * std::pow(_tmp45, Scalar(2)) *
                         std::pow(lambdas(0, 0), Scalar(2)) / _tmp46;
  const Scalar _tmp189 = std::sqrt(Scalar(_tmp16 + _tmp188 * std::pow(_tmp49, Scalar(2)) +
                                          _tmp188 * std::pow(_tmp69, Scalar(2)) +
                                          _tmp188 * std::pow(_tmp73, Scalar(2))));
  const Scalar _tmp190 = (Scalar(1) / Scalar(2)) * _tmp189;
  const Scalar _tmp191 = _tmp47 * lambdas(0, 0) * std::sin(_tmp190) / _tmp189;
  const Scalar _tmp192 = _tmp191 * _tmp73;
  const Scalar _tmp193 = std::cos(_tmp190);
  const Scalar _tmp194 = _tmp191 * _tmp49;
  const Scalar _tmp195 = _tmp191 * _x0[1];
  const Scalar _tmp196 = -_tmp192 * _x0[2] + _tmp193 * _x0[0] + _tmp194 * _x0[3] + _tmp195 * _tmp69;
  const Scalar _tmp197 = _tmp65 * _tmp79;
  const Scalar _tmp198 = _tmp191 * _x0[2];
  const Scalar _tmp199 = _tmp191 * _tmp69;
  const Scalar _tmp200 = _tmp192 * _x0[3] + _tmp193 * _x0[1] + _tmp198 * _tmp49 - _tmp199 * _x0[0];
  const Scalar _tmp201 = _tmp39 * _tmp65;
  const Scalar _tmp202 = _tmp192 * _x0[0] + _tmp193 * _x0[2] - _tmp195 * _tmp49 + _tmp199 * _x0[3];
  const Scalar _tmp203 = _tmp65 * _tmp95;
  const Scalar _tmp204 = -_tmp192 * _x0[1] + _tmp193 * _x0[3] - _tmp194 * _x0[0] - _tmp198 * _tmp69;
  const Scalar _tmp205 =
      -_tmp196 * _tmp197 - _tmp200 * _tmp201 - _tmp202 * _tmp203 + _tmp204 * _tmp64;
  const Scalar _tmp206 =
      _tmp196 * _tmp201 - _tmp197 * _tmp200 + _tmp202 * _tmp64 + _tmp203 * _tmp204;
  const Scalar _tmp207 = _tmp118 * _tmp26;
  const Scalar _tmp208 =
      -_tmp196 * _tmp203 + _tmp197 * _tmp202 + _tmp200 * _tmp64 + _tmp201 * _tmp204;
  const Scalar _tmp209 = _tmp104 * _tmp26;
  const Scalar _tmp210 =
      _tmp196 * _tmp64 + _tmp197 * _tmp204 + _tmp200 * _tmp203 - _tmp201 * _tmp202;
  const Scalar _tmp211 = _tmp113 * _tmp26;
  const Scalar _tmp212 =
      _tmp205 * _tmp24 - _tmp206 * _tmp207 - _tmp208 * _tmp209 - _tmp210 * _tmp211;
  const Scalar _tmp213 = _tmp147 * _tmp151;
  const Scalar _tmp214 = _tmp125 * _tmp213;
  const Scalar _tmp215 =
      _tmp205 * _tmp209 + _tmp206 * _tmp211 - _tmp207 * _tmp210 + _tmp208 * _tmp24;
  const Scalar _tmp216 = _tmp147 * _tmp215;
  const Scalar _tmp217 = _tmp151 * _tmp216;
  const Scalar _tmp218 =
      _tmp205 * _tmp211 - _tmp206 * _tmp209 + _tmp207 * _tmp208 + _tmp210 * _tmp24;
  const Scalar _tmp219 =
      _tmp205 * _tmp207 + _tmp206 * _tmp24 - _tmp208 * _tmp211 + _tmp209 * _tmp210;
  const Scalar _tmp220 = _tmp147 * _tmp179;
  const Scalar _tmp221 =
      _tmp124 * _tmp217 + _tmp145 * _tmp218 + _tmp212 * _tmp214 - _tmp219 * _tmp220;
  const Scalar _tmp222 = _tmp213 * _tmp218;
  const Scalar _tmp223 =
      -_tmp124 * _tmp222 + _tmp145 * _tmp215 + _tmp212 * _tmp220 + _tmp214 * _tmp219;
  const Scalar _tmp224 = 2 * _tmp221 * _tmp223;
  const Scalar _tmp225 = _tmp124 * _tmp213;
  const Scalar _tmp226 =
      -_tmp125 * _tmp222 + _tmp145 * _tmp212 - _tmp179 * _tmp216 - _tmp219 * _tmp225;
  const Scalar _tmp227 =
      -_tmp125 * _tmp217 + _tmp145 * _tmp219 + _tmp212 * _tmp225 + _tmp218 * _tmp220;
  const Scalar _tmp228 = 2 * _tmp227;
  const Scalar _tmp229 = _tmp226 * _tmp228;
  const Scalar _tmp230 = _tmp224 + _tmp229;
  const Scalar _tmp231 = -_x1[6] + _x2[6];
  const Scalar _tmp232 = -_x3[6] + _x4[6];
  const Scalar _tmp233 = -_x2[6] + _x3[6];
  const Scalar _tmp234 = -_x0[6] + _x1[6];
  const Scalar _tmp235 = _tmp231 * lambdas(1, 2) + _tmp232 * lambdas(3, 2) +
                         _tmp233 * lambdas(2, 2) + _tmp234 * lambdas(0, 2);
  const Scalar _tmp236 = 2 * _tmp226;
  const Scalar _tmp237 = _tmp223 * _tmp236;
  const Scalar _tmp238 = _tmp221 * _tmp228;
  const Scalar _tmp239 = -_tmp237 + _tmp238;
  const Scalar _tmp240 = -_x1[4] + _x2[4];
  const Scalar _tmp241 = -_x3[4] + _x4[4];
  const Scalar _tmp242 = -_x2[4] + _x3[4];
  const Scalar _tmp243 = -_x0[4] + _x1[4];
  const Scalar _tmp244 = _tmp240 * lambdas(1, 2) + _tmp241 * lambdas(3, 2) +
                         _tmp242 * lambdas(2, 2) + _tmp243 * lambdas(0, 2);
  const Scalar _tmp245 = -2 * std::pow(_tmp223, Scalar(2));
  const Scalar _tmp246 = 1 - 2 * std::pow(_tmp227, Scalar(2));
  const Scalar _tmp247 = _tmp245 + _tmp246;
  const Scalar _tmp248 = _tmp172 + _tmp178;
  const Scalar _tmp249 = _tmp183 * lambdas(1, 1) + _tmp184 * lambdas(3, 1) +
                         _tmp185 * lambdas(2, 1) + _tmp186 * lambdas(0, 1);
  const Scalar _tmp250 = -2 * std::pow(_tmp221, Scalar(2));
  const Scalar _tmp251 = _tmp246 + _tmp250;
  const Scalar _tmp252 = _tmp231 * lambdas(1, 1) + _tmp232 * lambdas(3, 1) +
                         _tmp233 * lambdas(2, 1) + _tmp234 * lambdas(0, 1);
  const Scalar _tmp253 = _tmp221 * _tmp236;
  const Scalar _tmp254 = _tmp223 * _tmp228;
  const Scalar _tmp255 = _tmp253 + _tmp254;
  const Scalar _tmp256 = _tmp240 * lambdas(1, 1) + _tmp241 * lambdas(3, 1) +
                         _tmp242 * lambdas(2, 1) + _tmp243 * lambdas(0, 1);
  const Scalar _tmp257 = _tmp224 - _tmp229;
  const Scalar _tmp258 = _tmp249 * _tmp251 + _tmp252 * _tmp255 + _tmp256 * _tmp257;
  const Scalar _tmp259 = _tmp170 + _tmp180;
  const Scalar _tmp260 = -_tmp253 + _tmp254;
  const Scalar _tmp261 = _tmp245 + _tmp250 + 1;
  const Scalar _tmp262 = _tmp237 + _tmp238;
  const Scalar _tmp263 = _tmp249 * _tmp260 + _tmp252 * _tmp261 + _tmp256 * _tmp262;
  const Scalar _tmp264 = _tmp230 * _tmp249 + _tmp239 * _tmp252 + _tmp247 * _tmp256;
  const Scalar _tmp265 = _tmp181 + _tmp182;

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp0 * (_tmp123 * _tmp150 + _tmp125 * _tmp152 + _tmp155 * _tmp158 +
                        _tmp170 * _tmp172 + _tmp173 * _tmp174 - _tmp178 * _tmp180);
  _res(1, 0) = _tmp0 * (_tmp123 * _tmp162 + _tmp155 * _tmp165 + _tmp168 * _tmp174 -
                        _tmp172 * _tmp181 + _tmp178 * _tmp182 + _tmp179 * lambdas(3, 2));
  _res(2, 0) = _tmp0 * (_tmp123 * _tmp175 + _tmp124 * _tmp152 + _tmp155 * _tmp176 -
                        _tmp170 * _tmp182 + _tmp174 * _tmp177 + _tmp180 * _tmp181);
  _res(3, 0) = _tmp0 * (_tmp187 * _tmp230 + _tmp235 * _tmp239 + _tmp244 * _tmp247 +
                        _tmp248 * _tmp258 - _tmp259 * _tmp263);
  _res(4, 0) = _tmp0 * (_tmp187 * _tmp251 + _tmp235 * _tmp255 + _tmp244 * _tmp257 -
                        _tmp248 * _tmp264 + _tmp263 * _tmp265);
  _res(5, 0) = _tmp0 * (_tmp187 * _tmp260 + _tmp235 * _tmp261 + _tmp244 * _tmp262 -
                        _tmp258 * _tmp265 + _tmp259 * _tmp264);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
