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
 * Symbolic function: spline3_pose3_acceleration
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix33
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix61
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Spline3Pose3AccelerationGlobal(
    const Scalar dt, const Eigen::Matrix<Scalar, 3, 3>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const Scalar epsilon) {
  // Total ops: 507

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();

  // Intermediate terms (164)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));
  const Scalar _tmp1 = 2 * _x0[0];
  const Scalar _tmp2 = _tmp1 * _x0[1];
  const Scalar _tmp3 = 2 * _x0[3];
  const Scalar _tmp4 = _tmp3 * _x0[2];
  const Scalar _tmp5 = _tmp2 - _tmp4;
  const Scalar _tmp6 = 1 - epsilon;
  const Scalar _tmp7 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp8 = _x2[3] * _x3[3];
  const Scalar _tmp9 = std::min<Scalar>(_tmp6, std::fabs(_tmp7 - _tmp8));
  const Scalar _tmp10 =
      2 * (2 * std::min<Scalar>(0, (((-_tmp7 + _tmp8) > 0) - ((-_tmp7 + _tmp8) < 0))) + 1) *
      std::acos(_tmp9) / std::sqrt(Scalar(1 - std::pow(_tmp9, Scalar(2))));
  const Scalar _tmp11 = _tmp10 * lambdas(2, 2);
  const Scalar _tmp12 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp13 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp14 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp15 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp16 = std::pow(_tmp15, Scalar(2));
  const Scalar _tmp17 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp18 = _x1[3] * _x2[3];
  const Scalar _tmp19 = std::min<Scalar>(_tmp6, std::fabs(_tmp17 - _tmp18));
  const Scalar _tmp20 = 1 - std::pow(_tmp19, Scalar(2));
  const Scalar _tmp21 =
      2 * std::min<Scalar>(0, (((-_tmp17 + _tmp18) > 0) - ((-_tmp17 + _tmp18) < 0))) + 1;
  const Scalar _tmp22 = std::acos(_tmp19);
  const Scalar _tmp23 = std::pow(_tmp21, Scalar(2)) * std::pow(_tmp22, Scalar(2)) *
                        std::pow(lambdas(1, 0), Scalar(2)) / _tmp20;
  const Scalar _tmp24 = 4 * _tmp23;
  const Scalar _tmp25 = std::pow(_tmp14, Scalar(2));
  const Scalar _tmp26 = std::pow(_tmp13, Scalar(2));
  const Scalar _tmp27 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp28 = _tmp16 * _tmp24 + _tmp24 * _tmp25 + _tmp24 * _tmp26 + _tmp27;
  const Scalar _tmp29 = std::sqrt(_tmp28);
  const Scalar _tmp30 = (Scalar(1) / Scalar(2)) * _tmp29;
  const Scalar _tmp31 = std::sin(_tmp30);
  const Scalar _tmp32 = 8 * _tmp23 * std::pow(_tmp31, Scalar(2)) / _tmp28;
  const Scalar _tmp33 = _tmp14 * _tmp32;
  const Scalar _tmp34 = _tmp13 * _tmp33;
  const Scalar _tmp35 = _tmp21 * _tmp22 / std::sqrt(_tmp20);
  const Scalar _tmp36 = 4 * _tmp31 * _tmp35 * lambdas(1, 0) * std::cos(_tmp30) / _tmp29;
  const Scalar _tmp37 = _tmp15 * _tmp36;
  const Scalar _tmp38 = _tmp12 * (_tmp34 - _tmp37);
  const Scalar _tmp39 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp40 = -_tmp25 * _tmp32;
  const Scalar _tmp41 = -_tmp16 * _tmp32 + 1;
  const Scalar _tmp42 = _tmp39 * (_tmp40 + _tmp41);
  const Scalar _tmp43 = 2 * _tmp35;
  const Scalar _tmp44 = _tmp13 * _tmp43;
  const Scalar _tmp45 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp46 = _tmp13 * _tmp15 * _tmp32;
  const Scalar _tmp47 = _tmp14 * _tmp36;
  const Scalar _tmp48 = _tmp45 * (_tmp46 + _tmp47);
  const Scalar _tmp49 = _tmp10 * lambdas(2, 1);
  const Scalar _tmp50 = _tmp39 * (_tmp34 + _tmp37);
  const Scalar _tmp51 = -_tmp26 * _tmp32;
  const Scalar _tmp52 = _tmp12 * (_tmp41 + _tmp51);
  const Scalar _tmp53 = _tmp13 * _tmp36;
  const Scalar _tmp54 = _tmp15 * _tmp33;
  const Scalar _tmp55 = _tmp45 * (-_tmp53 + _tmp54);
  const Scalar _tmp56 = _tmp49 * _tmp50 + _tmp49 * _tmp52 + _tmp49 * _tmp55;
  const Scalar _tmp57 = _tmp15 * _tmp43;
  const Scalar _tmp58 = _tmp57 * lambdas(1, 1);
  const Scalar _tmp59 = _tmp39 * (_tmp46 - _tmp47);
  const Scalar _tmp60 = _tmp12 * (_tmp53 + _tmp54);
  const Scalar _tmp61 = _tmp45 * (_tmp40 + _tmp51 + 1);
  const Scalar _tmp62 = _tmp49 * _tmp59 + _tmp49 * _tmp60 + _tmp49 * _tmp61;
  const Scalar _tmp63 = _tmp14 * _tmp43;
  const Scalar _tmp64 = _tmp63 * lambdas(1, 1);
  const Scalar _tmp65 = _tmp11 * _tmp38 + _tmp11 * _tmp42 + _tmp11 * _tmp48 +
                        _tmp44 * lambdas(1, 2) - _tmp56 * _tmp58 + _tmp62 * _tmp64;
  const Scalar _tmp66 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp67 = std::pow(_tmp66, Scalar(2));
  const Scalar _tmp68 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp69 = std::pow(_tmp68, Scalar(2));
  const Scalar _tmp70 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp71 = _x0[3] * _x1[3];
  const Scalar _tmp72 =
      2 * std::min<Scalar>(0, (((-_tmp70 + _tmp71) > 0) - ((-_tmp70 + _tmp71) < 0))) + 1;
  const Scalar _tmp73 = std::min<Scalar>(_tmp6, std::fabs(_tmp70 - _tmp71));
  const Scalar _tmp74 = std::acos(_tmp73);
  const Scalar _tmp75 = 1 - std::pow(_tmp73, Scalar(2));
  const Scalar _tmp76 = std::pow(_tmp72, Scalar(2)) * std::pow(_tmp74, Scalar(2)) *
                        std::pow(lambdas(0, 0), Scalar(2)) / _tmp75;
  const Scalar _tmp77 = 4 * _tmp76;
  const Scalar _tmp78 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp79 = std::pow(_tmp78, Scalar(2));
  const Scalar _tmp80 = _tmp27 + _tmp67 * _tmp77 + _tmp69 * _tmp77 + _tmp77 * _tmp79;
  const Scalar _tmp81 = std::sqrt(_tmp80);
  const Scalar _tmp82 = (Scalar(1) / Scalar(2)) * _tmp81;
  const Scalar _tmp83 = std::sin(_tmp82);
  const Scalar _tmp84 = 8 * _tmp76 * std::pow(_tmp83, Scalar(2)) / _tmp80;
  const Scalar _tmp85 = -_tmp67 * _tmp84;
  const Scalar _tmp86 = -_tmp69 * _tmp84 + 1;
  const Scalar _tmp87 = _tmp85 + _tmp86;
  const Scalar _tmp88 = _tmp66 * _tmp78 * _tmp84;
  const Scalar _tmp89 = _tmp72 * _tmp74 / std::sqrt(_tmp75);
  const Scalar _tmp90 = 4 * _tmp83 * _tmp89 * lambdas(0, 0) * std::cos(_tmp82) / _tmp81;
  const Scalar _tmp91 = _tmp68 * _tmp90;
  const Scalar _tmp92 = _tmp88 + _tmp91;
  const Scalar _tmp93 = _tmp44 * lambdas(1, 1);
  const Scalar _tmp94 = _tmp38 * _tmp49 + _tmp42 * _tmp49 + _tmp48 * _tmp49;
  const Scalar _tmp95 = _tmp93 + _tmp94;
  const Scalar _tmp96 = _tmp56 + _tmp64;
  const Scalar _tmp97 = -_tmp79 * _tmp84;
  const Scalar _tmp98 = _tmp86 + _tmp97;
  const Scalar _tmp99 = _tmp58 + _tmp62;
  const Scalar _tmp100 = _tmp78 * _tmp90;
  const Scalar _tmp101 = _tmp68 * _tmp84;
  const Scalar _tmp102 = _tmp101 * _tmp66;
  const Scalar _tmp103 = -_tmp100 + _tmp102;
  const Scalar _tmp104 = _tmp103 * _tmp99 + _tmp92 * _tmp95 + _tmp96 * _tmp98;
  const Scalar _tmp105 = 2 * _tmp89;
  const Scalar _tmp106 = _tmp105 * lambdas(0, 1);
  const Scalar _tmp107 = _tmp106 * _tmp68;
  const Scalar _tmp108 = _tmp101 * _tmp78;
  const Scalar _tmp109 = _tmp66 * _tmp90;
  const Scalar _tmp110 = _tmp108 + _tmp109;
  const Scalar _tmp111 = _tmp11 * _tmp59 + _tmp11 * _tmp60 + _tmp11 * _tmp61 + _tmp56 * _tmp93 +
                         _tmp57 * lambdas(1, 2) - _tmp64 * _tmp94;
  const Scalar _tmp112 = _tmp105 * lambdas(0, 2);
  const Scalar _tmp113 = _tmp88 - _tmp91;
  const Scalar _tmp114 = _tmp11 * _tmp50 + _tmp11 * _tmp52 + _tmp11 * _tmp55 + _tmp58 * _tmp94 -
                         _tmp62 * _tmp93 + _tmp63 * lambdas(1, 2);
  const Scalar _tmp115 = _tmp108 - _tmp109;
  const Scalar _tmp116 = _tmp85 + _tmp97 + 1;
  const Scalar _tmp117 = _tmp100 + _tmp102;
  const Scalar _tmp118 = _tmp115 * _tmp95 + _tmp116 * _tmp99 + _tmp117 * _tmp96;
  const Scalar _tmp119 = _tmp106 * _tmp66;
  const Scalar _tmp120 = -_tmp104 * _tmp107 + _tmp110 * _tmp111 + _tmp112 * _tmp78 +
                         _tmp113 * _tmp114 + _tmp118 * _tmp119 + _tmp65 * _tmp87;
  const Scalar _tmp121 = _tmp3 * _x0[1];
  const Scalar _tmp122 = _tmp1 * _x0[2];
  const Scalar _tmp123 = _tmp121 + _tmp122;
  const Scalar _tmp124 = _tmp106 * _tmp78;
  const Scalar _tmp125 = _tmp110 * _tmp99 + _tmp113 * _tmp96 + _tmp87 * _tmp95;
  const Scalar _tmp126 = _tmp103 * _tmp111 + _tmp107 * _tmp125 + _tmp112 * _tmp66 +
                         _tmp114 * _tmp98 - _tmp118 * _tmp124 + _tmp65 * _tmp92;
  const Scalar _tmp127 = -2 * std::pow(_x0[1], Scalar(2));
  const Scalar _tmp128 = 1 - 2 * std::pow(_x0[2], Scalar(2));
  const Scalar _tmp129 = _tmp127 + _tmp128;
  const Scalar _tmp130 = _tmp104 * _tmp124 + _tmp111 * _tmp116 + _tmp112 * _tmp68 +
                         _tmp114 * _tmp117 + _tmp115 * _tmp65 - _tmp119 * _tmp125;
  const Scalar _tmp131 = _tmp120 * _tmp5 + _tmp123 * _tmp126 + _tmp129 * _tmp130;
  const Scalar _tmp132 = -2 * std::pow(_x0[0], Scalar(2));
  const Scalar _tmp133 = _tmp128 + _tmp132;
  const Scalar _tmp134 = _tmp3 * _x0[0];
  const Scalar _tmp135 = 2 * _x0[1] * _x0[2];
  const Scalar _tmp136 = -_tmp134 + _tmp135;
  const Scalar _tmp137 = _tmp2 + _tmp4;
  const Scalar _tmp138 = _tmp120 * _tmp133 + _tmp126 * _tmp136 + _tmp130 * _tmp137;
  const Scalar _tmp139 = _tmp134 + _tmp135;
  const Scalar _tmp140 = _tmp127 + _tmp132 + 1;
  const Scalar _tmp141 = -_tmp121 + _tmp122;
  const Scalar _tmp142 = _tmp120 * _tmp139 + _tmp126 * _tmp140 + _tmp130 * _tmp141;
  const Scalar _tmp143 = -_x1[4] + _x2[4];
  const Scalar _tmp144 = -_x2[4] + _x3[4];
  const Scalar _tmp145 = -_x0[4] + _x1[4];
  const Scalar _tmp146 = -_x1[6] + _x2[6];
  const Scalar _tmp147 = -_x2[6] + _x3[6];
  const Scalar _tmp148 = -_x0[6] + _x1[6];
  const Scalar _tmp149 =
      _tmp146 * lambdas(1, 0) + _tmp147 * lambdas(2, 0) + _tmp148 * lambdas(0, 0) + _x0[6];
  const Scalar _tmp150 =
      _tmp146 * lambdas(1, 1) + _tmp147 * lambdas(2, 1) + _tmp148 * lambdas(0, 1);
  const Scalar _tmp151 = _tmp124 + _tmp125;
  const Scalar _tmp152 = _tmp104 + _tmp119;
  const Scalar _tmp153 = _tmp107 + _tmp118;
  const Scalar _tmp154 = _tmp133 * _tmp151 + _tmp136 * _tmp152 + _tmp137 * _tmp153;
  const Scalar _tmp155 = -_x1[5] + _x2[5];
  const Scalar _tmp156 = -_x2[5] + _x3[5];
  const Scalar _tmp157 = -_x0[5] + _x1[5];
  const Scalar _tmp158 =
      _tmp155 * lambdas(1, 0) + _tmp156 * lambdas(2, 0) + _tmp157 * lambdas(0, 0) + _x0[5];
  const Scalar _tmp159 = _tmp139 * _tmp151 + _tmp140 * _tmp152 + _tmp141 * _tmp153;
  const Scalar _tmp160 =
      _tmp155 * lambdas(1, 1) + _tmp156 * lambdas(2, 1) + _tmp157 * lambdas(0, 1);
  const Scalar _tmp161 = _tmp123 * _tmp152 + _tmp129 * _tmp153 + _tmp151 * _tmp5;
  const Scalar _tmp162 =
      _tmp143 * lambdas(1, 0) + _tmp144 * lambdas(2, 0) + _tmp145 * lambdas(0, 0) + _x0[4];
  const Scalar _tmp163 =
      _tmp143 * lambdas(1, 1) + _tmp144 * lambdas(2, 1) + _tmp145 * lambdas(0, 1);

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp0 * _tmp131;
  _res(1, 0) = _tmp0 * _tmp138;
  _res(2, 0) = _tmp0 * _tmp142;
  _res(3, 0) = _tmp0 * (-_tmp138 * _tmp149 + _tmp142 * _tmp158 + _tmp143 * lambdas(1, 2) +
                        _tmp144 * lambdas(2, 2) + _tmp145 * lambdas(0, 2) - _tmp150 * _tmp154 +
                        _tmp159 * _tmp160);
  _res(4, 0) =
      _tmp0 * (_tmp131 * _tmp149 - _tmp142 * _tmp162 + _tmp150 * _tmp161 + _tmp155 * lambdas(1, 2) +
               _tmp156 * lambdas(2, 2) + _tmp157 * lambdas(0, 2) - _tmp159 * _tmp163);
  _res(5, 0) = _tmp0 * (-_tmp131 * _tmp158 + _tmp138 * _tmp162 + _tmp146 * lambdas(1, 2) +
                        _tmp147 * lambdas(2, 2) + _tmp148 * lambdas(0, 2) + _tmp154 * _tmp163 -
                        _tmp160 * _tmp161);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
