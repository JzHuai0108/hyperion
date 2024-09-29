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
 * Symbolic function: spline4_pose3_velocity_factor
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix42
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     x4: Pose3
 *     velocity: Matrix61
 *     sqrt_info: Matrix66
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix61
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Spline4Pose3VelocityLocalFactor(
    const Scalar dt, const Eigen::Matrix<Scalar, 4, 2>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Pose3<Scalar>& x4, const Eigen::Matrix<Scalar, 6, 1>& velocity,
    const Eigen::Matrix<Scalar, 6, 6>& sqrt_info, const Scalar epsilon) {
  // Total ops: 715

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x4 = x4.Data();

  // Intermediate terms (188)
  const Scalar _tmp0 = Scalar(1.0) / (dt);
  const Scalar _tmp1 = lambdas(0, 1) * (-_x0[5] + _x1[5]) + lambdas(1, 1) * (-_x1[5] + _x2[5]) +
                       lambdas(2, 1) * (-_x2[5] + _x3[5]) + lambdas(3, 1) * (-_x3[5] + _x4[5]);
  const Scalar _tmp2 = -_x3[0] * _x4[3] - _x3[1] * _x4[2] + _x3[2] * _x4[1] + _x3[3] * _x4[0];
  const Scalar _tmp3 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp4 = std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = 1 - epsilon;
  const Scalar _tmp6 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp7 = _x2[3] * _x3[3];
  const Scalar _tmp8 = std::min<Scalar>(_tmp5, std::fabs(_tmp6 - _tmp7));
  const Scalar _tmp9 = 1 - std::pow(_tmp8, Scalar(2));
  const Scalar _tmp10 =
      2 * std::min<Scalar>(0, (((-_tmp6 + _tmp7) > 0) - ((-_tmp6 + _tmp7) < 0))) + 1;
  const Scalar _tmp11 = std::acos(_tmp8);
  const Scalar _tmp12 = std::pow(_tmp10, Scalar(2)) * std::pow(_tmp11, Scalar(2)) *
                        std::pow(lambdas(2, 0), Scalar(2)) / _tmp9;
  const Scalar _tmp13 = 4 * _tmp12;
  const Scalar _tmp14 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp15 = std::pow(_tmp14, Scalar(2));
  const Scalar _tmp16 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp17 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp18 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp19 = _tmp13 * _tmp15 + _tmp13 * _tmp17 + _tmp13 * _tmp4 + _tmp18;
  const Scalar _tmp20 = std::sqrt(_tmp19);
  const Scalar _tmp21 = (Scalar(1) / Scalar(2)) * _tmp20;
  const Scalar _tmp22 = std::cos(_tmp21);
  const Scalar _tmp23 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp24 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp25 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp26 = _x0[3] * _x1[3];
  const Scalar _tmp27 =
      2 * std::min<Scalar>(0, (((-_tmp25 + _tmp26) > 0) - ((-_tmp25 + _tmp26) < 0))) + 1;
  const Scalar _tmp28 = std::min<Scalar>(_tmp5, std::fabs(_tmp25 - _tmp26));
  const Scalar _tmp29 = std::acos(_tmp28);
  const Scalar _tmp30 = 1 - std::pow(_tmp28, Scalar(2));
  const Scalar _tmp31 = 4 * std::pow(_tmp27, Scalar(2)) * std::pow(_tmp29, Scalar(2)) *
                        std::pow(lambdas(0, 0), Scalar(2)) / _tmp30;
  const Scalar _tmp32 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp33 = std::sqrt(Scalar(_tmp18 + std::pow(_tmp23, Scalar(2)) * _tmp31 +
                                         std::pow(_tmp24, Scalar(2)) * _tmp31 +
                                         _tmp31 * std::pow(_tmp32, Scalar(2))));
  const Scalar _tmp34 = (Scalar(1) / Scalar(2)) * _tmp33;
  const Scalar _tmp35 = 2 * _tmp27 * _tmp29 / std::sqrt(_tmp30);
  const Scalar _tmp36 = _tmp35 * lambdas(0, 0) * std::sin(_tmp34) / _tmp33;
  const Scalar _tmp37 = _tmp23 * _tmp36;
  const Scalar _tmp38 = std::cos(_tmp34);
  const Scalar _tmp39 = _tmp24 * _tmp36;
  const Scalar _tmp40 = _tmp32 * _tmp36;
  const Scalar _tmp41 = -_tmp37 * _x0[2] + _tmp38 * _x0[0] + _tmp39 * _x0[3] + _tmp40 * _x0[1];
  const Scalar _tmp42 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp43 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp44 = _x1[3] * _x2[3];
  const Scalar _tmp45 = std::min<Scalar>(_tmp5, std::fabs(_tmp43 - _tmp44));
  const Scalar _tmp46 = 1 - std::pow(_tmp45, Scalar(2));
  const Scalar _tmp47 =
      2 * std::min<Scalar>(0, (((-_tmp43 + _tmp44) > 0) - ((-_tmp43 + _tmp44) < 0))) + 1;
  const Scalar _tmp48 = std::acos(_tmp45);
  const Scalar _tmp49 = _tmp47 * _tmp48 / std::sqrt(_tmp46);
  const Scalar _tmp50 = 2 * _tmp49;
  const Scalar _tmp51 = std::pow(_tmp42, Scalar(2));
  const Scalar _tmp52 = std::pow(_tmp47, Scalar(2)) * std::pow(_tmp48, Scalar(2)) *
                        std::pow(lambdas(1, 0), Scalar(2)) / _tmp46;
  const Scalar _tmp53 = 4 * _tmp52;
  const Scalar _tmp54 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp55 = std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(2));
  const Scalar _tmp58 = _tmp18 + _tmp51 * _tmp53 + _tmp53 * _tmp55 + _tmp53 * _tmp57;
  const Scalar _tmp59 = std::sqrt(_tmp58);
  const Scalar _tmp60 = (Scalar(1) / Scalar(2)) * _tmp59;
  const Scalar _tmp61 = std::sin(_tmp60);
  const Scalar _tmp62 = _tmp61 * lambdas(1, 0) / _tmp59;
  const Scalar _tmp63 = _tmp50 * _tmp62;
  const Scalar _tmp64 = _tmp42 * _tmp63;
  const Scalar _tmp65 = _tmp36 * _x0[2];
  const Scalar _tmp66 = _tmp24 * _tmp65 + _tmp37 * _x0[3] + _tmp38 * _x0[1] - _tmp40 * _x0[0];
  const Scalar _tmp67 = _tmp63 * _tmp66;
  const Scalar _tmp68 = _tmp37 * _x0[0] + _tmp38 * _x0[2] - _tmp39 * _x0[1] + _tmp40 * _x0[3];
  const Scalar _tmp69 = _tmp54 * _tmp63;
  const Scalar _tmp70 = -_tmp32 * _tmp65 - _tmp37 * _x0[1] + _tmp38 * _x0[3] - _tmp39 * _x0[0];
  const Scalar _tmp71 = std::cos(_tmp60);
  const Scalar _tmp72 = -_tmp41 * _tmp64 - _tmp56 * _tmp67 - _tmp68 * _tmp69 + _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp56 * _tmp63;
  const Scalar _tmp74 = _tmp41 * _tmp73 - _tmp64 * _tmp66 + _tmp68 * _tmp71 + _tmp69 * _tmp70;
  const Scalar _tmp75 = _tmp10 * _tmp11 / std::sqrt(_tmp9);
  const Scalar _tmp76 = 2 * _tmp75;
  const Scalar _tmp77 = std::sin(_tmp21);
  const Scalar _tmp78 = _tmp77 * lambdas(2, 0) / _tmp20;
  const Scalar _tmp79 = _tmp16 * _tmp78;
  const Scalar _tmp80 = _tmp76 * _tmp79;
  const Scalar _tmp81 = -_tmp41 * _tmp69 + _tmp64 * _tmp68 + _tmp66 * _tmp71 + _tmp70 * _tmp73;
  const Scalar _tmp82 = _tmp76 * _tmp78;
  const Scalar _tmp83 = _tmp3 * _tmp82;
  const Scalar _tmp84 = _tmp41 * _tmp71 + _tmp54 * _tmp67 + _tmp64 * _tmp70 - _tmp68 * _tmp73;
  const Scalar _tmp85 = _tmp14 * _tmp82;
  const Scalar _tmp86 = _tmp22 * _tmp72 - _tmp74 * _tmp80 - _tmp81 * _tmp83 - _tmp84 * _tmp85;
  const Scalar _tmp87 = -_x3[0] * _x4[0] - _x3[1] * _x4[1] - _x3[2] * _x4[2];
  const Scalar _tmp88 = _x3[3] * _x4[3];
  const Scalar _tmp89 = std::min<Scalar>(_tmp5, std::fabs(_tmp87 - _tmp88));
  const Scalar _tmp90 = std::acos(_tmp89);
  const Scalar _tmp91 =
      2 * std::min<Scalar>(0, (((-_tmp87 + _tmp88) > 0) - ((-_tmp87 + _tmp88) < 0))) + 1;
  const Scalar _tmp92 = 1 - std::pow(_tmp89, Scalar(2));
  const Scalar _tmp93 = _tmp90 * _tmp91 / std::sqrt(_tmp92);
  const Scalar _tmp94 = 2 * _tmp93;
  const Scalar _tmp95 = std::pow(_tmp2, Scalar(2));
  const Scalar _tmp96 = std::pow(_tmp90, Scalar(2)) * std::pow(_tmp91, Scalar(2)) *
                        std::pow(lambdas(3, 0), Scalar(2)) / _tmp92;
  const Scalar _tmp97 = 4 * _tmp96;
  const Scalar _tmp98 = -_x3[0] * _x4[1] + _x3[1] * _x4[0] - _x3[2] * _x4[3] + _x3[3] * _x4[2];
  const Scalar _tmp99 = std::pow(_tmp98, Scalar(2));
  const Scalar _tmp100 = _x3[0] * _x4[2] - _x3[1] * _x4[3] - _x3[2] * _x4[0] + _x3[3] * _x4[1];
  const Scalar _tmp101 = std::pow(_tmp100, Scalar(2));
  const Scalar _tmp102 = _tmp101 * _tmp97 + _tmp18 + _tmp95 * _tmp97 + _tmp97 * _tmp99;
  const Scalar _tmp103 = std::sqrt(_tmp102);
  const Scalar _tmp104 = (Scalar(1) / Scalar(2)) * _tmp103;
  const Scalar _tmp105 = std::sin(_tmp104);
  const Scalar _tmp106 = _tmp105 * lambdas(3, 0) / _tmp103;
  const Scalar _tmp107 = _tmp106 * _tmp94;
  const Scalar _tmp108 = _tmp107 * _tmp86;
  const Scalar _tmp109 = _tmp22 * _tmp81 + _tmp72 * _tmp83 + _tmp74 * _tmp85 - _tmp80 * _tmp84;
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = std::cos(_tmp104);
  const Scalar _tmp112 = _tmp22 * _tmp84 + _tmp72 * _tmp85 - _tmp74 * _tmp83 + _tmp80 * _tmp81;
  const Scalar _tmp113 = _tmp22 * _tmp74 + _tmp72 * _tmp80 - _tmp81 * _tmp85 + _tmp83 * _tmp84;
  const Scalar _tmp114 = _tmp107 * _tmp113;
  const Scalar _tmp115 =
      -_tmp100 * _tmp114 + _tmp108 * _tmp2 + _tmp110 * _tmp98 + _tmp111 * _tmp112;
  const Scalar _tmp116 = _tmp107 * _tmp112;
  const Scalar _tmp117 =
      -2 * _tmp100 * _tmp110 + 2 * _tmp111 * _tmp86 - 2 * _tmp114 * _tmp98 - 2 * _tmp116 * _tmp2;
  const Scalar _tmp118 = _tmp115 * _tmp117;
  const Scalar _tmp119 = _tmp100 * _tmp108 + _tmp109 * _tmp111 + _tmp114 * _tmp2 - _tmp116 * _tmp98;
  const Scalar _tmp120 = _tmp100 * _tmp116 + _tmp108 * _tmp98 - _tmp110 * _tmp2 + _tmp111 * _tmp113;
  const Scalar _tmp121 = 2 * _tmp120;
  const Scalar _tmp122 = _tmp119 * _tmp121;
  const Scalar _tmp123 = lambdas(0, 1) * (-_x0[6] + _x1[6]) + lambdas(1, 1) * (-_x1[6] + _x2[6]) +
                         lambdas(2, 1) * (-_x2[6] + _x3[6]) + lambdas(3, 1) * (-_x3[6] + _x4[6]);
  const Scalar _tmp124 = -2 * std::pow(_tmp115, Scalar(2));
  const Scalar _tmp125 = 1 - 2 * std::pow(_tmp119, Scalar(2));
  const Scalar _tmp126 = lambdas(0, 1) * (-_x0[4] + _x1[4]) + lambdas(1, 1) * (-_x1[4] + _x2[4]) +
                         lambdas(2, 1) * (-_x2[4] + _x3[4]) + lambdas(3, 1) * (-_x3[4] + _x4[4]);
  const Scalar _tmp127 = _tmp117 * _tmp119;
  const Scalar _tmp128 = _tmp115 * _tmp121;
  const Scalar _tmp129 = _tmp0 * (_tmp1 * (-_tmp118 + _tmp122) + _tmp123 * (_tmp124 + _tmp125) +
                                  _tmp126 * (_tmp127 + _tmp128)) -
                         velocity(5, 0);
  const Scalar _tmp130 = 4 * _tmp22 * _tmp75;
  const Scalar _tmp131 = _tmp130 * _tmp78;
  const Scalar _tmp132 = _tmp131 * _tmp14;
  const Scalar _tmp133 = 8 * _tmp12 * std::pow(_tmp77, Scalar(2)) / _tmp19;
  const Scalar _tmp134 = _tmp133 * _tmp3;
  const Scalar _tmp135 = _tmp134 * _tmp16;
  const Scalar _tmp136 = 8 * _tmp52 * std::pow(_tmp61, Scalar(2)) / _tmp58;
  const Scalar _tmp137 = _tmp136 * _tmp42;
  const Scalar _tmp138 = _tmp137 * _tmp56;
  const Scalar _tmp139 = 4 * _tmp49 * _tmp62 * _tmp71;
  const Scalar _tmp140 = _tmp139 * _tmp54;
  const Scalar _tmp141 = _tmp35 * lambdas(0, 1);
  const Scalar _tmp142 = _tmp141 * _tmp24;
  const Scalar _tmp143 = _tmp136 * _tmp54 * _tmp56;
  const Scalar _tmp144 = _tmp139 * _tmp42;
  const Scalar _tmp145 = _tmp141 * _tmp32;
  const Scalar _tmp146 = _tmp50 * lambdas(1, 1);
  const Scalar _tmp147 = -_tmp136 * _tmp55;
  const Scalar _tmp148 = -_tmp136 * _tmp51 + 1;
  const Scalar _tmp149 = _tmp141 * _tmp23;
  const Scalar _tmp150 = _tmp142 * (_tmp138 - _tmp140) + _tmp145 * (_tmp143 + _tmp144) +
                         _tmp146 * _tmp56 + _tmp149 * (_tmp147 + _tmp148);
  const Scalar _tmp151 = _tmp139 * _tmp56;
  const Scalar _tmp152 = _tmp137 * _tmp54;
  const Scalar _tmp153 = -_tmp136 * _tmp57;
  const Scalar _tmp154 = _tmp142 * (_tmp147 + _tmp153 + 1) + _tmp145 * (-_tmp151 + _tmp152) +
                         _tmp146 * _tmp42 + _tmp149 * (_tmp138 + _tmp140);
  const Scalar _tmp155 = _tmp131 * _tmp3;
  const Scalar _tmp156 = _tmp133 * _tmp14 * _tmp16;
  const Scalar _tmp157 = _tmp76 * lambdas(2, 1);
  const Scalar _tmp158 = -_tmp133 * _tmp4;
  const Scalar _tmp159 = -_tmp133 * _tmp15;
  const Scalar _tmp160 = _tmp142 * (_tmp151 + _tmp152) + _tmp145 * (_tmp148 + _tmp153) +
                         _tmp146 * _tmp54 + _tmp149 * (_tmp143 - _tmp144);
  const Scalar _tmp161 = _tmp150 * (-_tmp132 + _tmp135) + _tmp154 * (_tmp155 + _tmp156) +
                         _tmp157 * _tmp16 + _tmp160 * (_tmp158 + _tmp159 + 1);
  const Scalar _tmp162 = 8 * std::pow(_tmp105, Scalar(2)) * _tmp96 / _tmp102;
  const Scalar _tmp163 = _tmp162 * _tmp2;
  const Scalar _tmp164 = _tmp163 * _tmp98;
  const Scalar _tmp165 = 4 * _tmp106 * _tmp111 * _tmp93;
  const Scalar _tmp166 = _tmp100 * _tmp165;
  const Scalar _tmp167 = _tmp94 * lambdas(3, 1);
  const Scalar _tmp168 = -_tmp101 * _tmp162;
  const Scalar _tmp169 = -_tmp162 * _tmp99;
  const Scalar _tmp170 = _tmp134 * _tmp14;
  const Scalar _tmp171 = _tmp130 * _tmp79;
  const Scalar _tmp172 = -_tmp133 * _tmp17 + 1;
  const Scalar _tmp173 = _tmp14 * _tmp157 + _tmp150 * (_tmp170 + _tmp171) +
                         _tmp154 * (_tmp158 + _tmp172) + _tmp160 * (-_tmp155 + _tmp156);
  const Scalar _tmp174 = _tmp100 * _tmp163;
  const Scalar _tmp175 = _tmp165 * _tmp98;
  const Scalar _tmp176 = _tmp150 * (_tmp159 + _tmp172) + _tmp154 * (_tmp170 - _tmp171) +
                         _tmp157 * _tmp3 + _tmp160 * (_tmp132 + _tmp135);
  const Scalar _tmp177 =
      _tmp0 * (_tmp161 * (_tmp164 - _tmp166) + _tmp167 * _tmp2 + _tmp173 * (_tmp168 + _tmp169 + 1) +
               _tmp176 * (_tmp174 + _tmp175)) -
      velocity(0, 0);
  const Scalar _tmp178 = -_tmp162 * _tmp95 + 1;
  const Scalar _tmp179 = _tmp100 * _tmp162 * _tmp98;
  const Scalar _tmp180 = _tmp165 * _tmp2;
  const Scalar _tmp181 = _tmp0 * (_tmp161 * (_tmp168 + _tmp178) + _tmp167 * _tmp98 +
                                  _tmp173 * (_tmp164 + _tmp166) + _tmp176 * (_tmp179 - _tmp180)) -
                         velocity(2, 0);
  const Scalar _tmp182 = _tmp0 * (_tmp100 * _tmp167 + _tmp161 * (_tmp179 + _tmp180) +
                                  _tmp173 * (_tmp174 - _tmp175) + _tmp176 * (_tmp169 + _tmp178)) -
                         velocity(1, 0);
  const Scalar _tmp183 = 2 * _tmp115 * _tmp119;
  const Scalar _tmp184 = _tmp117 * _tmp120;
  const Scalar _tmp185 = -2 * std::pow(_tmp120, Scalar(2));
  const Scalar _tmp186 = _tmp0 * (_tmp1 * (_tmp183 + _tmp184) + _tmp123 * (-_tmp127 + _tmp128) +
                                  _tmp126 * (_tmp125 + _tmp185)) -
                         velocity(3, 0);
  const Scalar _tmp187 = _tmp0 * (_tmp1 * (_tmp124 + _tmp185 + 1) + _tmp123 * (_tmp118 + _tmp122) +
                                  _tmp126 * (_tmp183 - _tmp184)) -
                         velocity(4, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp129 * sqrt_info(0, 5) + _tmp177 * sqrt_info(0, 0) + _tmp181 * sqrt_info(0, 2) +
               _tmp182 * sqrt_info(0, 1) + _tmp186 * sqrt_info(0, 3) + _tmp187 * sqrt_info(0, 4);
  _res(1, 0) = _tmp129 * sqrt_info(1, 5) + _tmp177 * sqrt_info(1, 0) + _tmp181 * sqrt_info(1, 2) +
               _tmp182 * sqrt_info(1, 1) + _tmp186 * sqrt_info(1, 3) + _tmp187 * sqrt_info(1, 4);
  _res(2, 0) = _tmp129 * sqrt_info(2, 5) + _tmp177 * sqrt_info(2, 0) + _tmp181 * sqrt_info(2, 2) +
               _tmp182 * sqrt_info(2, 1) + _tmp186 * sqrt_info(2, 3) + _tmp187 * sqrt_info(2, 4);
  _res(3, 0) = _tmp129 * sqrt_info(3, 5) + _tmp177 * sqrt_info(3, 0) + _tmp181 * sqrt_info(3, 2) +
               _tmp182 * sqrt_info(3, 1) + _tmp186 * sqrt_info(3, 3) + _tmp187 * sqrt_info(3, 4);
  _res(4, 0) = _tmp129 * sqrt_info(4, 5) + _tmp177 * sqrt_info(4, 0) + _tmp181 * sqrt_info(4, 2) +
               _tmp182 * sqrt_info(4, 1) + _tmp186 * sqrt_info(4, 3) + _tmp187 * sqrt_info(4, 4);
  _res(5, 0) = _tmp129 * sqrt_info(5, 5) + _tmp177 * sqrt_info(5, 0) + _tmp181 * sqrt_info(5, 2) +
               _tmp182 * sqrt_info(5, 1) + _tmp186 * sqrt_info(5, 3) + _tmp187 * sqrt_info(5, 4);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
