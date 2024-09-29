// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/rot3.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline5_rot3_acceleration_factor
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix53
 *     x0: Rot3
 *     x1: Rot3
 *     x2: Rot3
 *     x3: Rot3
 *     x4: Rot3
 *     x5: Rot3
 *     acceleration: Matrix31
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline5Rot3AccelerationLocalFactor(
    const Scalar dt, const Eigen::Matrix<Scalar, 5, 3>& lambdas, const sym::Rot3<Scalar>& x0,
    const sym::Rot3<Scalar>& x1, const sym::Rot3<Scalar>& x2, const sym::Rot3<Scalar>& x3,
    const sym::Rot3<Scalar>& x4, const sym::Rot3<Scalar>& x5,
    const Eigen::Matrix<Scalar, 3, 1>& acceleration, const Eigen::Matrix<Scalar, 3, 3>& sqrt_info,
    const Scalar epsilon) {
  // Total ops: 686

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x4 = x4.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x5 = x5.Data();

  // Intermediate terms (229)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));
  const Scalar _tmp1 = -_x3[0] * _x4[1] + _x3[1] * _x4[0] - _x3[2] * _x4[3] + _x3[3] * _x4[2];
  const Scalar _tmp2 = _x3[0] * _x4[2] - _x3[1] * _x4[3] - _x3[2] * _x4[0] + _x3[3] * _x4[1];
  const Scalar _tmp3 = -_x3[0] * _x4[3] - _x3[1] * _x4[2] + _x3[2] * _x4[1] + _x3[3] * _x4[0];
  const Scalar _tmp4 = std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_x3[0] * _x4[0] - _x3[1] * _x4[1] - _x3[2] * _x4[2];
  const Scalar _tmp6 = _x3[3] * _x4[3];
  const Scalar _tmp7 = 1 - epsilon;
  const Scalar _tmp8 = std::min<Scalar>(_tmp7, std::fabs(_tmp5 - _tmp6));
  const Scalar _tmp9 = std::acos(_tmp8);
  const Scalar _tmp10 =
      2 * std::min<Scalar>(0, (((-_tmp5 + _tmp6) > 0) - ((-_tmp5 + _tmp6) < 0))) + 1;
  const Scalar _tmp11 = 1 - std::pow(_tmp8, Scalar(2));
  const Scalar _tmp12 = std::pow(_tmp10, Scalar(2)) * std::pow(_tmp9, Scalar(2)) *
                        std::pow(lambdas(3, 0), Scalar(2)) / _tmp11;
  const Scalar _tmp13 = 4 * _tmp12;
  const Scalar _tmp14 = std::pow(_tmp2, Scalar(2));
  const Scalar _tmp15 = std::pow(_tmp1, Scalar(2));
  const Scalar _tmp16 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp17 = _tmp13 * _tmp14 + _tmp13 * _tmp15 + _tmp13 * _tmp4 + _tmp16;
  const Scalar _tmp18 = std::sqrt(_tmp17);
  const Scalar _tmp19 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp20 = std::sin(_tmp19);
  const Scalar _tmp21 = 8 * _tmp12 * std::pow(_tmp20, Scalar(2)) / _tmp17;
  const Scalar _tmp22 = _tmp2 * _tmp21;
  const Scalar _tmp23 = _tmp1 * _tmp22;
  const Scalar _tmp24 = _tmp10 * _tmp9 / std::sqrt(_tmp11);
  const Scalar _tmp25 = 4 * _tmp20 * _tmp24 * lambdas(3, 0) * std::cos(_tmp19) / _tmp18;
  const Scalar _tmp26 = _tmp25 * _tmp3;
  const Scalar _tmp27 = _tmp23 + _tmp26;
  const Scalar _tmp28 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp29 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp30 = _x2[3] * _x3[3];
  const Scalar _tmp31 = std::min<Scalar>(_tmp7, std::fabs(_tmp29 - _tmp30));
  const Scalar _tmp32 = std::acos(_tmp31);
  const Scalar _tmp33 =
      2 * std::min<Scalar>(0, (((-_tmp29 + _tmp30) > 0) - ((-_tmp29 + _tmp30) < 0))) + 1;
  const Scalar _tmp34 = 1 - std::pow(_tmp31, Scalar(2));
  const Scalar _tmp35 = _tmp32 * _tmp33 / std::sqrt(_tmp34);
  const Scalar _tmp36 = 2 * _tmp35;
  const Scalar _tmp37 = _tmp36 * lambdas(2, 1);
  const Scalar _tmp38 = _tmp28 * _tmp37;
  const Scalar _tmp39 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp40 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp41 = _x1[3] * _x2[3];
  const Scalar _tmp42 = std::min<Scalar>(_tmp7, std::fabs(_tmp40 - _tmp41));
  const Scalar _tmp43 = 1 - std::pow(_tmp42, Scalar(2));
  const Scalar _tmp44 = std::acos(_tmp42);
  const Scalar _tmp45 =
      2 * std::min<Scalar>(0, (((-_tmp40 + _tmp41) > 0) - ((-_tmp40 + _tmp41) < 0))) + 1;
  const Scalar _tmp46 = _tmp44 * _tmp45 / std::sqrt(_tmp43);
  const Scalar _tmp47 = 2 * _tmp46;
  const Scalar _tmp48 = _tmp47 * lambdas(1, 1);
  const Scalar _tmp49 = _tmp39 * _tmp48;
  const Scalar _tmp50 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp51 = _x0[3] * _x1[3];
  const Scalar _tmp52 = std::min<Scalar>(_tmp7, std::fabs(_tmp50 - _tmp51));
  const Scalar _tmp53 =
      2 * (2 * std::min<Scalar>(0, (((-_tmp50 + _tmp51) > 0) - ((-_tmp50 + _tmp51) < 0))) + 1) *
      std::acos(_tmp52) / std::sqrt(Scalar(1 - std::pow(_tmp52, Scalar(2))));
  const Scalar _tmp54 = _tmp53 * lambdas(0, 1);
  const Scalar _tmp55 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp56 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(2));
  const Scalar _tmp58 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp59 = std::pow(_tmp58, Scalar(2));
  const Scalar _tmp60 = std::pow(_tmp44, Scalar(2)) * std::pow(_tmp45, Scalar(2)) *
                        std::pow(lambdas(1, 0), Scalar(2)) / _tmp43;
  const Scalar _tmp61 = 4 * _tmp60;
  const Scalar _tmp62 = std::pow(_tmp39, Scalar(2));
  const Scalar _tmp63 = _tmp16 + _tmp57 * _tmp61 + _tmp59 * _tmp61 + _tmp61 * _tmp62;
  const Scalar _tmp64 = std::sqrt(_tmp63);
  const Scalar _tmp65 = (Scalar(1) / Scalar(2)) * _tmp64;
  const Scalar _tmp66 = std::sin(_tmp65);
  const Scalar _tmp67 = 8 * _tmp60 * std::pow(_tmp66, Scalar(2)) / _tmp63;
  const Scalar _tmp68 = -_tmp57 * _tmp67;
  const Scalar _tmp69 = -_tmp59 * _tmp67 + 1;
  const Scalar _tmp70 = _tmp55 * (_tmp68 + _tmp69);
  const Scalar _tmp71 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp72 = 4 * _tmp46 * _tmp66 * lambdas(1, 0) * std::cos(_tmp65) / _tmp64;
  const Scalar _tmp73 = _tmp56 * _tmp72;
  const Scalar _tmp74 = _tmp39 * _tmp67;
  const Scalar _tmp75 = _tmp58 * _tmp74;
  const Scalar _tmp76 = _tmp71 * (_tmp73 + _tmp75);
  const Scalar _tmp77 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp78 = _tmp58 * _tmp72;
  const Scalar _tmp79 = _tmp56 * _tmp74;
  const Scalar _tmp80 = _tmp77 * (-_tmp78 + _tmp79);
  const Scalar _tmp81 = _tmp54 * _tmp70 + _tmp54 * _tmp76 + _tmp54 * _tmp80;
  const Scalar _tmp82 = _tmp49 + _tmp81;
  const Scalar _tmp83 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp84 = std::pow(_tmp28, Scalar(2));
  const Scalar _tmp85 = std::pow(_tmp32, Scalar(2)) * std::pow(_tmp33, Scalar(2)) *
                        std::pow(lambdas(2, 0), Scalar(2)) / _tmp34;
  const Scalar _tmp86 = 4 * _tmp85;
  const Scalar _tmp87 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp88 = std::pow(_tmp87, Scalar(2));
  const Scalar _tmp89 = std::pow(_tmp83, Scalar(2));
  const Scalar _tmp90 = _tmp16 + _tmp84 * _tmp86 + _tmp86 * _tmp88 + _tmp86 * _tmp89;
  const Scalar _tmp91 = std::sqrt(_tmp90);
  const Scalar _tmp92 = (Scalar(1) / Scalar(2)) * _tmp91;
  const Scalar _tmp93 = std::sin(_tmp92);
  const Scalar _tmp94 = 8 * _tmp85 * std::pow(_tmp93, Scalar(2)) / _tmp90;
  const Scalar _tmp95 = _tmp83 * _tmp94;
  const Scalar _tmp96 = _tmp28 * _tmp95;
  const Scalar _tmp97 = 4 * _tmp35 * _tmp93 * lambdas(2, 0) * std::cos(_tmp92) / _tmp91;
  const Scalar _tmp98 = _tmp87 * _tmp97;
  const Scalar _tmp99 = _tmp96 + _tmp98;
  const Scalar _tmp100 = _tmp48 * _tmp58;
  const Scalar _tmp101 = _tmp55 * (-_tmp73 + _tmp75);
  const Scalar _tmp102 = _tmp56 * _tmp58 * _tmp67;
  const Scalar _tmp103 = _tmp39 * _tmp72;
  const Scalar _tmp104 = _tmp77 * (_tmp102 + _tmp103);
  const Scalar _tmp105 = -_tmp62 * _tmp67;
  const Scalar _tmp106 = _tmp71 * (_tmp105 + _tmp68 + 1);
  const Scalar _tmp107 = _tmp101 * _tmp54 + _tmp104 * _tmp54 + _tmp106 * _tmp54;
  const Scalar _tmp108 = _tmp100 + _tmp107;
  const Scalar _tmp109 = _tmp83 * _tmp97;
  const Scalar _tmp110 = _tmp28 * _tmp87 * _tmp94;
  const Scalar _tmp111 = -_tmp109 + _tmp110;
  const Scalar _tmp112 = -_tmp89 * _tmp94;
  const Scalar _tmp113 = -_tmp88 * _tmp94 + 1;
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = _tmp47 * _tmp56;
  const Scalar _tmp116 = _tmp115 * lambdas(1, 1);
  const Scalar _tmp117 = _tmp77 * (_tmp105 + _tmp69);
  const Scalar _tmp118 = _tmp71 * (_tmp102 - _tmp103);
  const Scalar _tmp119 = _tmp55 * (_tmp78 + _tmp79);
  const Scalar _tmp120 = _tmp117 * _tmp54 + _tmp118 * _tmp54 + _tmp119 * _tmp54;
  const Scalar _tmp121 = _tmp116 + _tmp120;
  const Scalar _tmp122 = _tmp108 * _tmp111 + _tmp114 * _tmp121 + _tmp82 * _tmp99;
  const Scalar _tmp123 = _tmp122 + _tmp38;
  const Scalar _tmp124 = _tmp37 * _tmp87;
  const Scalar _tmp125 = _tmp28 * _tmp97;
  const Scalar _tmp126 = _tmp87 * _tmp95;
  const Scalar _tmp127 = -_tmp125 + _tmp126;
  const Scalar _tmp128 = _tmp109 + _tmp110;
  const Scalar _tmp129 = -_tmp84 * _tmp94;
  const Scalar _tmp130 = _tmp112 + _tmp129 + 1;
  const Scalar _tmp131 = _tmp108 * _tmp130 + _tmp121 * _tmp128 + _tmp127 * _tmp82;
  const Scalar _tmp132 = _tmp124 + _tmp131;
  const Scalar _tmp133 = -_tmp21 * _tmp4;
  const Scalar _tmp134 = -_tmp15 * _tmp21 + 1;
  const Scalar _tmp135 = _tmp133 + _tmp134;
  const Scalar _tmp136 = _tmp22 * _tmp3;
  const Scalar _tmp137 = _tmp1 * _tmp25;
  const Scalar _tmp138 = _tmp136 - _tmp137;
  const Scalar _tmp139 = _tmp36 * _tmp83;
  const Scalar _tmp140 = _tmp139 * lambdas(2, 1);
  const Scalar _tmp141 = _tmp125 + _tmp126;
  const Scalar _tmp142 = _tmp113 + _tmp129;
  const Scalar _tmp143 = _tmp96 - _tmp98;
  const Scalar _tmp144 = _tmp108 * _tmp141 + _tmp121 * _tmp143 + _tmp142 * _tmp82;
  const Scalar _tmp145 = _tmp140 + _tmp144;
  const Scalar _tmp146 = _tmp123 * _tmp27 + _tmp132 * _tmp135 + _tmp138 * _tmp145;
  const Scalar _tmp147 = 2 * _tmp24;
  const Scalar _tmp148 = _tmp1 * _tmp147;
  const Scalar _tmp149 = _tmp148 * lambdas(3, 1);
  const Scalar _tmp150 = _tmp2 * _tmp25;
  const Scalar _tmp151 = _tmp1 * _tmp21 * _tmp3;
  const Scalar _tmp152 = -_tmp150 + _tmp151;
  const Scalar _tmp153 = _tmp36 * lambdas(2, 2);
  const Scalar _tmp154 = _tmp53 * lambdas(0, 2);
  const Scalar _tmp155 = _tmp100 * _tmp81 - _tmp107 * _tmp49 + _tmp115 * lambdas(1, 2) +
                         _tmp117 * _tmp154 + _tmp118 * _tmp154 + _tmp119 * _tmp154;
  const Scalar _tmp156 = _tmp47 * lambdas(1, 2);
  const Scalar _tmp157 = -_tmp100 * _tmp120 + _tmp107 * _tmp116 + _tmp154 * _tmp70 +
                         _tmp154 * _tmp76 + _tmp154 * _tmp80 + _tmp156 * _tmp39;
  const Scalar _tmp158 = _tmp101 * _tmp154 + _tmp104 * _tmp154 + _tmp106 * _tmp154 -
                         _tmp116 * _tmp81 + _tmp120 * _tmp49 + _tmp156 * _tmp58;
  const Scalar _tmp159 = _tmp111 * _tmp158 + _tmp114 * _tmp155 + _tmp124 * _tmp144 -
                         _tmp131 * _tmp140 + _tmp153 * _tmp28 + _tmp157 * _tmp99;
  const Scalar _tmp160 = _tmp147 * _tmp3;
  const Scalar _tmp161 = -_tmp122 * _tmp124 + _tmp131 * _tmp38 + _tmp139 * lambdas(2, 2) +
                         _tmp141 * _tmp158 + _tmp142 * _tmp157 + _tmp143 * _tmp155;
  const Scalar _tmp162 = -_tmp14 * _tmp21;
  const Scalar _tmp163 = _tmp134 + _tmp162;
  const Scalar _tmp164 = _tmp136 + _tmp137;
  const Scalar _tmp165 = _tmp122 * _tmp140 + _tmp127 * _tmp157 + _tmp128 * _tmp155 +
                         _tmp130 * _tmp158 - _tmp144 * _tmp38 + _tmp153 * _tmp87;
  const Scalar _tmp166 = _tmp133 + _tmp162 + 1;
  const Scalar _tmp167 = _tmp23 - _tmp26;
  const Scalar _tmp168 = _tmp150 + _tmp151;
  const Scalar _tmp169 = _tmp123 * _tmp166 + _tmp132 * _tmp167 + _tmp145 * _tmp168;
  const Scalar _tmp170 = _tmp147 * _tmp2;
  const Scalar _tmp171 = _tmp170 * lambdas(3, 1);
  const Scalar _tmp172 = _tmp146 * _tmp149 + _tmp152 * _tmp159 + _tmp160 * lambdas(3, 2) +
                         _tmp161 * _tmp163 + _tmp164 * _tmp165 - _tmp169 * _tmp171;
  const Scalar _tmp173 = _x4[0] * _x5[2] - _x4[1] * _x5[3] - _x4[2] * _x5[0] + _x4[3] * _x5[1];
  const Scalar _tmp174 = std::pow(_tmp173, Scalar(2));
  const Scalar _tmp175 = -_x4[0] * _x5[3] - _x4[1] * _x5[2] + _x4[2] * _x5[1] + _x4[3] * _x5[0];
  const Scalar _tmp176 = std::pow(_tmp175, Scalar(2));
  const Scalar _tmp177 = -_x4[0] * _x5[0] - _x4[1] * _x5[1] - _x4[2] * _x5[2];
  const Scalar _tmp178 = _x4[3] * _x5[3];
  const Scalar _tmp179 = std::min<Scalar>(_tmp7, std::fabs(_tmp177 - _tmp178));
  const Scalar _tmp180 = std::acos(_tmp179);
  const Scalar _tmp181 =
      2 * std::min<Scalar>(0, (((-_tmp177 + _tmp178) > 0) - ((-_tmp177 + _tmp178) < 0))) + 1;
  const Scalar _tmp182 = 1 - std::pow(_tmp179, Scalar(2));
  const Scalar _tmp183 = std::pow(_tmp180, Scalar(2)) * std::pow(_tmp181, Scalar(2)) *
                         std::pow(lambdas(4, 0), Scalar(2)) / _tmp182;
  const Scalar _tmp184 = 4 * _tmp183;
  const Scalar _tmp185 = -_x4[0] * _x5[1] + _x4[1] * _x5[0] - _x4[2] * _x5[3] + _x4[3] * _x5[2];
  const Scalar _tmp186 = std::pow(_tmp185, Scalar(2));
  const Scalar _tmp187 = _tmp16 + _tmp174 * _tmp184 + _tmp176 * _tmp184 + _tmp184 * _tmp186;
  const Scalar _tmp188 = std::sqrt(_tmp187);
  const Scalar _tmp189 = (Scalar(1) / Scalar(2)) * _tmp188;
  const Scalar _tmp190 = std::sin(_tmp189);
  const Scalar _tmp191 = 8 * _tmp183 * std::pow(_tmp190, Scalar(2)) / _tmp187;
  const Scalar _tmp192 = -_tmp174 * _tmp191;
  const Scalar _tmp193 = -_tmp186 * _tmp191 + 1;
  const Scalar _tmp194 = _tmp192 + _tmp193;
  const Scalar _tmp195 = _tmp180 * _tmp181 / std::sqrt(_tmp182);
  const Scalar _tmp196 = 2 * _tmp195;
  const Scalar _tmp197 = _tmp196 * lambdas(4, 2);
  const Scalar _tmp198 = _tmp123 * _tmp152 + _tmp132 * _tmp164 + _tmp145 * _tmp163;
  const Scalar _tmp199 = _tmp160 * lambdas(3, 1);
  const Scalar _tmp200 = -_tmp146 * _tmp199 + _tmp148 * lambdas(3, 2) + _tmp159 * _tmp166 +
                         _tmp161 * _tmp168 + _tmp165 * _tmp167 + _tmp171 * _tmp198;
  const Scalar _tmp201 = _tmp175 * _tmp185 * _tmp191;
  const Scalar _tmp202 = 4 * _tmp190 * _tmp195 * lambdas(4, 0) * std::cos(_tmp189) / _tmp188;
  const Scalar _tmp203 = _tmp173 * _tmp202;
  const Scalar _tmp204 = _tmp201 - _tmp203;
  const Scalar _tmp205 = _tmp198 + _tmp199;
  const Scalar _tmp206 = _tmp201 + _tmp203;
  const Scalar _tmp207 = _tmp146 + _tmp171;
  const Scalar _tmp208 = _tmp175 * _tmp202;
  const Scalar _tmp209 = _tmp173 * _tmp191;
  const Scalar _tmp210 = _tmp185 * _tmp209;
  const Scalar _tmp211 = -_tmp208 + _tmp210;
  const Scalar _tmp212 = -_tmp176 * _tmp191;
  const Scalar _tmp213 = _tmp192 + _tmp212 + 1;
  const Scalar _tmp214 = _tmp149 + _tmp169;
  const Scalar _tmp215 = _tmp196 * lambdas(4, 1);
  const Scalar _tmp216 = _tmp215 * (_tmp205 * _tmp206 + _tmp207 * _tmp211 + _tmp213 * _tmp214);
  const Scalar _tmp217 = _tmp175 * _tmp209;
  const Scalar _tmp218 = _tmp185 * _tmp202;
  const Scalar _tmp219 = _tmp217 + _tmp218;
  const Scalar _tmp220 = _tmp135 * _tmp165 + _tmp138 * _tmp161 - _tmp149 * _tmp198 +
                         _tmp159 * _tmp27 + _tmp169 * _tmp199 + _tmp170 * lambdas(3, 2);
  const Scalar _tmp221 = _tmp208 + _tmp210;
  const Scalar _tmp222 = _tmp217 - _tmp218;
  const Scalar _tmp223 = _tmp193 + _tmp212;
  const Scalar _tmp224 = _tmp215 * (_tmp205 * _tmp222 + _tmp207 * _tmp223 + _tmp214 * _tmp221);
  const Scalar _tmp225 = _tmp0 * (_tmp172 * _tmp194 - _tmp173 * _tmp216 + _tmp175 * _tmp197 +
                                  _tmp185 * _tmp224 + _tmp200 * _tmp204 + _tmp219 * _tmp220) -
                         acceleration(0, 0);
  const Scalar _tmp226 = _tmp215 * (_tmp194 * _tmp205 + _tmp204 * _tmp214 + _tmp207 * _tmp219);
  const Scalar _tmp227 = _tmp0 * (_tmp172 * _tmp206 + _tmp173 * _tmp226 - _tmp175 * _tmp224 +
                                  _tmp185 * _tmp197 + _tmp200 * _tmp213 + _tmp211 * _tmp220) -
                         acceleration(2, 0);
  const Scalar _tmp228 = _tmp0 * (_tmp172 * _tmp222 + _tmp173 * _tmp197 + _tmp175 * _tmp216 -
                                  _tmp185 * _tmp226 + _tmp200 * _tmp221 + _tmp220 * _tmp223) -
                         acceleration(1, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp225 * sqrt_info(0, 0) + _tmp227 * sqrt_info(0, 2) + _tmp228 * sqrt_info(0, 1);
  _res(1, 0) = _tmp225 * sqrt_info(1, 0) + _tmp227 * sqrt_info(1, 2) + _tmp228 * sqrt_info(1, 1);
  _res(2, 0) = _tmp225 * sqrt_info(2, 0) + _tmp227 * sqrt_info(2, 2) + _tmp228 * sqrt_info(2, 1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
