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
 * Symbolic function: spline4_pose3_velocity
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix42
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
Eigen::Matrix<Scalar, 6, 1> Spline4Pose3VelocityLocal(
    const Scalar dt, const Eigen::Matrix<Scalar, 4, 2>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Pose3<Scalar>& x4, const Scalar epsilon) {
  // Total ops: 642

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x4 = x4.Data();

  // Intermediate terms (185)
  const Scalar _tmp0 = Scalar(1.0) / (dt);
  const Scalar _tmp1 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp2 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp3 = std::pow(_tmp2, Scalar(2));
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
  const Scalar _tmp13 = std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp15 = std::pow(_tmp14, Scalar(2));
  const Scalar _tmp16 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp17 = _tmp12 * _tmp13 + _tmp12 * _tmp15 + _tmp12 * _tmp3 + _tmp16;
  const Scalar _tmp18 = std::sqrt(_tmp17);
  const Scalar _tmp19 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp20 = std::cos(_tmp19);
  const Scalar _tmp21 = _tmp10 * _tmp9 / std::sqrt(_tmp8);
  const Scalar _tmp22 = std::sin(_tmp19);
  const Scalar _tmp23 = _tmp22 * lambdas(2, 0) / _tmp18;
  const Scalar _tmp24 = 4 * _tmp20 * _tmp21 * _tmp23;
  const Scalar _tmp25 = _tmp1 * _tmp24;
  const Scalar _tmp26 = 8 * _tmp11 * std::pow(_tmp22, Scalar(2)) / _tmp17;
  const Scalar _tmp27 = _tmp14 * _tmp2 * _tmp26;
  const Scalar _tmp28 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp29 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp30 = std::pow(_tmp28, Scalar(2));
  const Scalar _tmp31 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp32 = _x1[3] * _x2[3];
  const Scalar _tmp33 = std::min<Scalar>(_tmp4, std::fabs(_tmp31 - _tmp32));
  const Scalar _tmp34 = 1 - std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 =
      2 * std::min<Scalar>(0, (((-_tmp31 + _tmp32) > 0) - ((-_tmp31 + _tmp32) < 0))) + 1;
  const Scalar _tmp36 = std::acos(_tmp33);
  const Scalar _tmp37 = std::pow(_tmp35, Scalar(2)) * std::pow(_tmp36, Scalar(2)) *
                        std::pow(lambdas(1, 0), Scalar(2)) / _tmp34;
  const Scalar _tmp38 = 4 * _tmp37;
  const Scalar _tmp39 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(2));
  const Scalar _tmp41 = std::pow(_tmp29, Scalar(2));
  const Scalar _tmp42 = _tmp16 + _tmp30 * _tmp38 + _tmp38 * _tmp40 + _tmp38 * _tmp41;
  const Scalar _tmp43 = std::sqrt(_tmp42);
  const Scalar _tmp44 = (Scalar(1) / Scalar(2)) * _tmp43;
  const Scalar _tmp45 = std::sin(_tmp44);
  const Scalar _tmp46 = 8 * _tmp37 * std::pow(_tmp45, Scalar(2)) / _tmp42;
  const Scalar _tmp47 = _tmp29 * _tmp46;
  const Scalar _tmp48 = _tmp28 * _tmp47;
  const Scalar _tmp49 = _tmp45 * lambdas(1, 0) / _tmp43;
  const Scalar _tmp50 = _tmp39 * _tmp49;
  const Scalar _tmp51 = std::cos(_tmp44);
  const Scalar _tmp52 = _tmp35 * _tmp36 / std::sqrt(_tmp34);
  const Scalar _tmp53 = 4 * _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp50 * _tmp53;
  const Scalar _tmp55 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp56 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp57 = _x0[3] * _x1[3];
  const Scalar _tmp58 =
      2 * std::min<Scalar>(0, (((-_tmp56 + _tmp57) > 0) - ((-_tmp56 + _tmp57) < 0))) + 1;
  const Scalar _tmp59 = std::min<Scalar>(_tmp4, std::fabs(_tmp56 - _tmp57));
  const Scalar _tmp60 = std::acos(_tmp59);
  const Scalar _tmp61 = 1 - std::pow(_tmp59, Scalar(2));
  const Scalar _tmp62 = 2 * _tmp58 * _tmp60 / std::sqrt(_tmp61);
  const Scalar _tmp63 = _tmp62 * lambdas(0, 1);
  const Scalar _tmp64 = _tmp55 * _tmp63;
  const Scalar _tmp65 = _tmp39 * _tmp47;
  const Scalar _tmp66 = _tmp28 * _tmp49;
  const Scalar _tmp67 = _tmp53 * _tmp66;
  const Scalar _tmp68 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp69 = _tmp63 * _tmp68;
  const Scalar _tmp70 = 2 * _tmp52;
  const Scalar _tmp71 = _tmp70 * lambdas(1, 1);
  const Scalar _tmp72 = -_tmp30 * _tmp46;
  const Scalar _tmp73 = -_tmp40 * _tmp46 + 1;
  const Scalar _tmp74 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp75 = _tmp63 * _tmp74;
  const Scalar _tmp76 = _tmp29 * _tmp71 + _tmp64 * (_tmp48 - _tmp54) + _tmp69 * (_tmp65 + _tmp67) +
                        _tmp75 * (_tmp72 + _tmp73);
  const Scalar _tmp77 = _tmp29 * _tmp49;
  const Scalar _tmp78 = _tmp53 * _tmp77;
  const Scalar _tmp79 = _tmp28 * _tmp39 * _tmp46;
  const Scalar _tmp80 = -_tmp41 * _tmp46;
  const Scalar _tmp81 = _tmp28 * _tmp71 + _tmp64 * (_tmp73 + _tmp80) + _tmp69 * (-_tmp78 + _tmp79) +
                        _tmp75 * (_tmp48 + _tmp54);
  const Scalar _tmp82 = _tmp2 * _tmp24;
  const Scalar _tmp83 = _tmp1 * _tmp26;
  const Scalar _tmp84 = _tmp14 * _tmp83;
  const Scalar _tmp85 = 2 * _tmp21;
  const Scalar _tmp86 = _tmp85 * lambdas(2, 1);
  const Scalar _tmp87 = -_tmp26 * _tmp3;
  const Scalar _tmp88 = -_tmp13 * _tmp26;
  const Scalar _tmp89 = _tmp39 * _tmp71 + _tmp64 * (_tmp78 + _tmp79) +
                        _tmp69 * (_tmp72 + _tmp80 + 1) + _tmp75 * (_tmp65 - _tmp67);
  const Scalar _tmp90 = _tmp14 * _tmp86 + _tmp76 * (-_tmp25 + _tmp27) + _tmp81 * (_tmp82 + _tmp84) +
                        _tmp89 * (_tmp87 + _tmp88 + 1);
  const Scalar _tmp91 = -_x3[0] * _x4[1] + _x3[1] * _x4[0] - _x3[2] * _x4[3] + _x3[3] * _x4[2];
  const Scalar _tmp92 = -_x3[0] * _x4[3] - _x3[1] * _x4[2] + _x3[2] * _x4[1] + _x3[3] * _x4[0];
  const Scalar _tmp93 = std::pow(_tmp92, Scalar(2));
  const Scalar _tmp94 = -_x3[0] * _x4[0] - _x3[1] * _x4[1] - _x3[2] * _x4[2];
  const Scalar _tmp95 = _x3[3] * _x4[3];
  const Scalar _tmp96 = std::min<Scalar>(_tmp4, std::fabs(_tmp94 - _tmp95));
  const Scalar _tmp97 = std::acos(_tmp96);
  const Scalar _tmp98 =
      2 * std::min<Scalar>(0, (((-_tmp94 + _tmp95) > 0) - ((-_tmp94 + _tmp95) < 0))) + 1;
  const Scalar _tmp99 = 1 - std::pow(_tmp96, Scalar(2));
  const Scalar _tmp100 = std::pow(_tmp97, Scalar(2)) * std::pow(_tmp98, Scalar(2)) *
                         std::pow(lambdas(3, 0), Scalar(2)) / _tmp99;
  const Scalar _tmp101 = 4 * _tmp100;
  const Scalar _tmp102 = std::pow(_tmp91, Scalar(2));
  const Scalar _tmp103 = _x3[0] * _x4[2] - _x3[1] * _x4[3] - _x3[2] * _x4[0] + _x3[3] * _x4[1];
  const Scalar _tmp104 = std::pow(_tmp103, Scalar(2));
  const Scalar _tmp105 = _tmp101 * _tmp102 + _tmp101 * _tmp104 + _tmp101 * _tmp93 + _tmp16;
  const Scalar _tmp106 = std::sqrt(_tmp105);
  const Scalar _tmp107 = (Scalar(1) / Scalar(2)) * _tmp106;
  const Scalar _tmp108 = std::sin(_tmp107);
  const Scalar _tmp109 = 8 * _tmp100 * std::pow(_tmp108, Scalar(2)) / _tmp105;
  const Scalar _tmp110 = _tmp109 * _tmp91 * _tmp92;
  const Scalar _tmp111 = std::cos(_tmp107);
  const Scalar _tmp112 = _tmp97 * _tmp98 / std::sqrt(_tmp99);
  const Scalar _tmp113 = _tmp108 * lambdas(3, 0) / _tmp106;
  const Scalar _tmp114 = 4 * _tmp111 * _tmp112 * _tmp113;
  const Scalar _tmp115 = _tmp103 * _tmp114;
  const Scalar _tmp116 = 2 * _tmp112;
  const Scalar _tmp117 = _tmp116 * lambdas(3, 1);
  const Scalar _tmp118 = -_tmp104 * _tmp109;
  const Scalar _tmp119 = -_tmp102 * _tmp109 + 1;
  const Scalar _tmp120 = _tmp2 * _tmp83;
  const Scalar _tmp121 = _tmp14 * _tmp24;
  const Scalar _tmp122 = -_tmp15 * _tmp26 + 1;
  const Scalar _tmp123 = _tmp1 * _tmp86 + _tmp76 * (_tmp120 + _tmp121) +
                         _tmp81 * (_tmp122 + _tmp87) + _tmp89 * (-_tmp82 + _tmp84);
  const Scalar _tmp124 = _tmp103 * _tmp109;
  const Scalar _tmp125 = _tmp124 * _tmp92;
  const Scalar _tmp126 = _tmp114 * _tmp91;
  const Scalar _tmp127 = _tmp2 * _tmp86 + _tmp76 * (_tmp122 + _tmp88) +
                         _tmp81 * (_tmp120 - _tmp121) + _tmp89 * (_tmp25 + _tmp27);
  const Scalar _tmp128 = _tmp124 * _tmp91;
  const Scalar _tmp129 = _tmp114 * _tmp92;
  const Scalar _tmp130 = -_tmp109 * _tmp93;
  const Scalar _tmp131 = lambdas(0, 1) * (-_x0[5] + _x1[5]) + lambdas(1, 1) * (-_x1[5] + _x2[5]) +
                         lambdas(2, 1) * (-_x2[5] + _x3[5]) + lambdas(3, 1) * (-_x3[5] + _x4[5]);
  const Scalar _tmp132 = 4 * std::pow(_tmp58, Scalar(2)) * std::pow(_tmp60, Scalar(2)) *
                         std::pow(lambdas(0, 0), Scalar(2)) / _tmp61;
  const Scalar _tmp133 = std::sqrt(Scalar(_tmp132 * std::pow(_tmp55, Scalar(2)) +
                                          _tmp132 * std::pow(_tmp68, Scalar(2)) +
                                          _tmp132 * std::pow(_tmp74, Scalar(2)) + _tmp16));
  const Scalar _tmp134 = (Scalar(1) / Scalar(2)) * _tmp133;
  const Scalar _tmp135 = _tmp62 * lambdas(0, 0) * std::sin(_tmp134) / _tmp133;
  const Scalar _tmp136 = _tmp135 * _tmp74;
  const Scalar _tmp137 = std::cos(_tmp134);
  const Scalar _tmp138 = _tmp135 * _tmp55;
  const Scalar _tmp139 = _tmp135 * _tmp68;
  const Scalar _tmp140 = -_tmp136 * _x0[2] + _tmp137 * _x0[0] + _tmp138 * _x0[3] + _tmp139 * _x0[1];
  const Scalar _tmp141 = _tmp140 * _tmp70;
  const Scalar _tmp142 = _tmp136 * _x0[3] + _tmp137 * _x0[1] + _tmp138 * _x0[2] - _tmp139 * _x0[0];
  const Scalar _tmp143 = _tmp142 * _tmp70;
  const Scalar _tmp144 = _tmp136 * _x0[0] + _tmp137 * _x0[2] - _tmp138 * _x0[1] + _tmp139 * _x0[3];
  const Scalar _tmp145 = _tmp144 * _tmp70;
  const Scalar _tmp146 = -_tmp136 * _x0[1] + _tmp137 * _x0[3] - _tmp138 * _x0[0] - _tmp139 * _x0[2];
  const Scalar _tmp147 = -_tmp141 * _tmp66 - _tmp143 * _tmp77 - _tmp145 * _tmp50 + _tmp146 * _tmp51;
  const Scalar _tmp148 = _tmp23 * _tmp85;
  const Scalar _tmp149 = _tmp147 * _tmp148;
  const Scalar _tmp150 = _tmp146 * _tmp70;
  const Scalar _tmp151 = -_tmp141 * _tmp50 + _tmp142 * _tmp51 + _tmp145 * _tmp66 + _tmp150 * _tmp77;
  const Scalar _tmp152 = _tmp148 * _tmp151;
  const Scalar _tmp153 = _tmp140 * _tmp51 + _tmp143 * _tmp50 - _tmp145 * _tmp77 + _tmp150 * _tmp66;
  const Scalar _tmp154 = _tmp148 * _tmp2;
  const Scalar _tmp155 = _tmp141 * _tmp77 - _tmp143 * _tmp66 + _tmp144 * _tmp51 + _tmp150 * _tmp50;
  const Scalar _tmp156 = -_tmp1 * _tmp152 + _tmp14 * _tmp149 + _tmp153 * _tmp154 + _tmp155 * _tmp20;
  const Scalar _tmp157 = _tmp113 * _tmp116;
  const Scalar _tmp158 = _tmp156 * _tmp157;
  const Scalar _tmp159 = _tmp148 * _tmp155;
  const Scalar _tmp160 = _tmp1 * _tmp149 + _tmp14 * _tmp152 + _tmp153 * _tmp20 - _tmp159 * _tmp2;
  const Scalar _tmp161 = _tmp157 * _tmp91;
  const Scalar _tmp162 = _tmp148 * _tmp153;
  const Scalar _tmp163 = -_tmp1 * _tmp162 - _tmp14 * _tmp159 + _tmp147 * _tmp20 - _tmp151 * _tmp154;
  const Scalar _tmp164 = _tmp103 * _tmp157;
  const Scalar _tmp165 = _tmp1 * _tmp159 - _tmp14 * _tmp162 + _tmp149 * _tmp2 + _tmp151 * _tmp20;
  const Scalar _tmp166 =
      _tmp111 * _tmp165 + _tmp158 * _tmp92 - _tmp160 * _tmp161 + _tmp163 * _tmp164;
  const Scalar _tmp167 = _tmp157 * _tmp92;
  const Scalar _tmp168 = _tmp157 * _tmp165;
  const Scalar _tmp169 =
      -_tmp103 * _tmp158 + _tmp111 * _tmp160 + _tmp163 * _tmp167 + _tmp168 * _tmp91;
  const Scalar _tmp170 = 2 * _tmp169;
  const Scalar _tmp171 = _tmp166 * _tmp170;
  const Scalar _tmp172 =
      _tmp111 * _tmp156 + _tmp160 * _tmp164 + _tmp161 * _tmp163 - _tmp168 * _tmp92;
  const Scalar _tmp173 =
      -_tmp103 * _tmp168 + _tmp111 * _tmp163 - _tmp158 * _tmp91 - _tmp160 * _tmp167;
  const Scalar _tmp174 = 2 * _tmp173;
  const Scalar _tmp175 = _tmp172 * _tmp174;
  const Scalar _tmp176 = lambdas(0, 1) * (-_x0[6] + _x1[6]) + lambdas(1, 1) * (-_x1[6] + _x2[6]) +
                         lambdas(2, 1) * (-_x2[6] + _x3[6]) + lambdas(3, 1) * (-_x3[6] + _x4[6]);
  const Scalar _tmp177 = _tmp166 * _tmp174;
  const Scalar _tmp178 = _tmp170 * _tmp172;
  const Scalar _tmp179 = lambdas(0, 1) * (-_x0[4] + _x1[4]) + lambdas(1, 1) * (-_x1[4] + _x2[4]) +
                         lambdas(2, 1) * (-_x2[4] + _x3[4]) + lambdas(3, 1) * (-_x3[4] + _x4[4]);
  const Scalar _tmp180 = -2 * std::pow(_tmp166, Scalar(2));
  const Scalar _tmp181 = -2 * std::pow(_tmp172, Scalar(2));
  const Scalar _tmp182 = 1 - 2 * std::pow(_tmp169, Scalar(2));
  const Scalar _tmp183 = _tmp170 * _tmp173;
  const Scalar _tmp184 = 2 * _tmp166 * _tmp172;

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp0 * (_tmp117 * _tmp92 + _tmp123 * (_tmp118 + _tmp119) +
                        _tmp127 * (_tmp125 + _tmp126) + _tmp90 * (_tmp110 - _tmp115));
  _res(1, 0) = _tmp0 * (_tmp103 * _tmp117 + _tmp123 * (_tmp125 - _tmp126) +
                        _tmp127 * (_tmp119 + _tmp130) + _tmp90 * (_tmp128 + _tmp129));
  _res(2, 0) = _tmp0 * (_tmp117 * _tmp91 + _tmp123 * (_tmp110 + _tmp115) +
                        _tmp127 * (_tmp128 - _tmp129) + _tmp90 * (_tmp118 + _tmp130 + 1));
  _res(3, 0) = _tmp0 * (_tmp131 * (_tmp171 + _tmp175) + _tmp176 * (-_tmp177 + _tmp178) +
                        _tmp179 * (_tmp180 + _tmp181 + 1));
  _res(4, 0) = _tmp0 * (_tmp131 * (_tmp181 + _tmp182) + _tmp176 * (_tmp183 + _tmp184) +
                        _tmp179 * (_tmp171 - _tmp175));
  _res(5, 0) = _tmp0 * (_tmp131 * (-_tmp183 + _tmp184) + _tmp176 * (_tmp180 + _tmp182) +
                        _tmp179 * (_tmp177 + _tmp178));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
