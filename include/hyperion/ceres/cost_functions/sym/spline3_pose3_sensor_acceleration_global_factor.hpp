// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose3.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline3_pose3_sensor_acceleration_factor
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix33
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     x_T_s: Pose3
 *     acceleration: Matrix61
 *     sqrt_info: Matrix66
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix61
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Spline3Pose3SensorAccelerationGlobalFactor(
    const Scalar dt, const Eigen::Matrix<Scalar, 3, 3>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Pose3<Scalar>& x_T_s, const Eigen::Matrix<Scalar, 6, 1>& acceleration,
    const Eigen::Matrix<Scalar, 6, 6>& sqrt_info, const Scalar epsilon) {
  // Total ops: 580

  // Unused inputs
  (void)x_T_s;

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();

  // Intermediate terms (172)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));
  const Scalar _tmp1 = -_x1[4] + _x2[4];
  const Scalar _tmp2 = -_x2[4] + _x3[4];
  const Scalar _tmp3 = -_x0[4] + _x1[4];
  const Scalar _tmp4 = -2 * std::pow(_x0[0], Scalar(2));
  const Scalar _tmp5 = 1 - 2 * std::pow(_x0[2], Scalar(2));
  const Scalar _tmp6 = _tmp4 + _tmp5;
  const Scalar _tmp7 = 1 - epsilon;
  const Scalar _tmp8 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp9 = _x2[3] * _x3[3];
  const Scalar _tmp10 = std::min<Scalar>(_tmp7, std::fabs(_tmp8 - _tmp9));
  const Scalar _tmp11 =
      2 * (2 * std::min<Scalar>(0, (((-_tmp8 + _tmp9) > 0) - ((-_tmp8 + _tmp9) < 0))) + 1) *
      std::acos(_tmp10) / std::sqrt(Scalar(1 - std::pow(_tmp10, Scalar(2))));
  const Scalar _tmp12 = _tmp11 * lambdas(2, 2);
  const Scalar _tmp13 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp14 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp15 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp16 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp17 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp18 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp19 = _x1[3] * _x2[3];
  const Scalar _tmp20 = std::min<Scalar>(_tmp7, std::fabs(_tmp18 - _tmp19));
  const Scalar _tmp21 = 1 - std::pow(_tmp20, Scalar(2));
  const Scalar _tmp22 =
      2 * std::min<Scalar>(0, (((-_tmp18 + _tmp19) > 0) - ((-_tmp18 + _tmp19) < 0))) + 1;
  const Scalar _tmp23 = std::acos(_tmp20);
  const Scalar _tmp24 = std::pow(_tmp22, Scalar(2)) * std::pow(_tmp23, Scalar(2)) *
                        std::pow(lambdas(1, 0), Scalar(2)) / _tmp21;
  const Scalar _tmp25 = 4 * _tmp24;
  const Scalar _tmp26 = std::pow(_tmp15, Scalar(2));
  const Scalar _tmp27 = std::pow(_tmp14, Scalar(2));
  const Scalar _tmp28 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp29 = _tmp17 * _tmp25 + _tmp25 * _tmp26 + _tmp25 * _tmp27 + _tmp28;
  const Scalar _tmp30 = std::sqrt(_tmp29);
  const Scalar _tmp31 = (Scalar(1) / Scalar(2)) * _tmp30;
  const Scalar _tmp32 = std::sin(_tmp31);
  const Scalar _tmp33 = 8 * _tmp24 * std::pow(_tmp32, Scalar(2)) / _tmp29;
  const Scalar _tmp34 = _tmp15 * _tmp33;
  const Scalar _tmp35 = _tmp14 * _tmp34;
  const Scalar _tmp36 = _tmp22 * _tmp23 / std::sqrt(_tmp21);
  const Scalar _tmp37 = 4 * _tmp32 * _tmp36 * lambdas(1, 0) * std::cos(_tmp31) / _tmp30;
  const Scalar _tmp38 = _tmp16 * _tmp37;
  const Scalar _tmp39 = _tmp13 * (_tmp35 - _tmp38);
  const Scalar _tmp40 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp41 = -_tmp17 * _tmp33;
  const Scalar _tmp42 = -_tmp26 * _tmp33 + 1;
  const Scalar _tmp43 = _tmp40 * (_tmp41 + _tmp42);
  const Scalar _tmp44 = 2 * _tmp36;
  const Scalar _tmp45 = _tmp14 * _tmp44;
  const Scalar _tmp46 = _tmp14 * _tmp16 * _tmp33;
  const Scalar _tmp47 = _tmp15 * _tmp37;
  const Scalar _tmp48 =
      _tmp11 * (-_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0]);
  const Scalar _tmp49 = _tmp48 * (_tmp46 + _tmp47);
  const Scalar _tmp50 = _tmp40 * (_tmp35 + _tmp38);
  const Scalar _tmp51 = _tmp11 * lambdas(2, 1);
  const Scalar _tmp52 = -_tmp27 * _tmp33;
  const Scalar _tmp53 = _tmp13 * (_tmp41 + _tmp52 + 1);
  const Scalar _tmp54 = _tmp14 * _tmp37;
  const Scalar _tmp55 = _tmp16 * _tmp34;
  const Scalar _tmp56 = -_tmp54 + _tmp55;
  const Scalar _tmp57 = _tmp48 * lambdas(2, 1);
  const Scalar _tmp58 = _tmp50 * _tmp51 + _tmp51 * _tmp53 + _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp16 * _tmp44;
  const Scalar _tmp60 = _tmp59 * lambdas(1, 1);
  const Scalar _tmp61 = _tmp40 * (_tmp46 - _tmp47);
  const Scalar _tmp62 = _tmp13 * (_tmp54 + _tmp55);
  const Scalar _tmp63 = _tmp42 + _tmp52;
  const Scalar _tmp64 = _tmp51 * _tmp61 + _tmp51 * _tmp62 + _tmp57 * _tmp63;
  const Scalar _tmp65 = _tmp15 * _tmp44;
  const Scalar _tmp66 = _tmp65 * lambdas(1, 1);
  const Scalar _tmp67 = _tmp12 * _tmp39 + _tmp12 * _tmp43 + _tmp45 * lambdas(1, 2) +
                        _tmp49 * lambdas(2, 2) - _tmp58 * _tmp60 + _tmp64 * _tmp66;
  const Scalar _tmp68 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp69 = std::pow(_tmp68, Scalar(2));
  const Scalar _tmp70 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp71 = _x0[3] * _x1[3];
  const Scalar _tmp72 =
      2 * std::min<Scalar>(0, (((-_tmp70 + _tmp71) > 0) - ((-_tmp70 + _tmp71) < 0))) + 1;
  const Scalar _tmp73 = std::min<Scalar>(_tmp7, std::fabs(_tmp70 - _tmp71));
  const Scalar _tmp74 = std::acos(_tmp73);
  const Scalar _tmp75 = 1 - std::pow(_tmp73, Scalar(2));
  const Scalar _tmp76 = std::pow(_tmp72, Scalar(2)) * std::pow(_tmp74, Scalar(2)) *
                        std::pow(lambdas(0, 0), Scalar(2)) / _tmp75;
  const Scalar _tmp77 = 4 * _tmp76;
  const Scalar _tmp78 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp79 = std::pow(_tmp78, Scalar(2));
  const Scalar _tmp80 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp81 = std::pow(_tmp80, Scalar(2));
  const Scalar _tmp82 = _tmp28 + _tmp69 * _tmp77 + _tmp77 * _tmp79 + _tmp77 * _tmp81;
  const Scalar _tmp83 = std::sqrt(_tmp82);
  const Scalar _tmp84 = (Scalar(1) / Scalar(2)) * _tmp83;
  const Scalar _tmp85 = std::sin(_tmp84);
  const Scalar _tmp86 = 8 * _tmp76 * std::pow(_tmp85, Scalar(2)) / _tmp82;
  const Scalar _tmp87 = -_tmp69 * _tmp86;
  const Scalar _tmp88 = -_tmp81 * _tmp86 + 1;
  const Scalar _tmp89 = _tmp87 + _tmp88;
  const Scalar _tmp90 = _tmp80 * _tmp86;
  const Scalar _tmp91 = _tmp78 * _tmp90;
  const Scalar _tmp92 = _tmp72 * _tmp74 / std::sqrt(_tmp75);
  const Scalar _tmp93 = 4 * _tmp85 * _tmp92 * lambdas(0, 0) * std::cos(_tmp84) / _tmp83;
  const Scalar _tmp94 = _tmp68 * _tmp93;
  const Scalar _tmp95 = _tmp91 + _tmp94;
  const Scalar _tmp96 = _tmp45 * lambdas(1, 1);
  const Scalar _tmp97 = _tmp39 * _tmp51 + _tmp43 * _tmp51 + _tmp49 * lambdas(2, 1);
  const Scalar _tmp98 = _tmp96 + _tmp97;
  const Scalar _tmp99 = _tmp58 + _tmp66;
  const Scalar _tmp100 = -_tmp79 * _tmp86;
  const Scalar _tmp101 = _tmp100 + _tmp87 + 1;
  const Scalar _tmp102 = _tmp60 + _tmp64;
  const Scalar _tmp103 = _tmp78 * _tmp93;
  const Scalar _tmp104 = _tmp68 * _tmp90;
  const Scalar _tmp105 = -_tmp103 + _tmp104;
  const Scalar _tmp106 = _tmp101 * _tmp99 + _tmp102 * _tmp105 + _tmp95 * _tmp98;
  const Scalar _tmp107 = 2 * _tmp92;
  const Scalar _tmp108 = _tmp107 * lambdas(0, 1);
  const Scalar _tmp109 = _tmp108 * _tmp68;
  const Scalar _tmp110 = _tmp68 * _tmp78 * _tmp86;
  const Scalar _tmp111 = _tmp80 * _tmp93;
  const Scalar _tmp112 = _tmp110 + _tmp111;
  const Scalar _tmp113 = _tmp48 * lambdas(2, 2);
  const Scalar _tmp114 = _tmp113 * _tmp63 + _tmp12 * _tmp61 + _tmp12 * _tmp62 + _tmp58 * _tmp96 +
                         _tmp59 * lambdas(1, 2) - _tmp66 * _tmp97;
  const Scalar _tmp115 = _tmp107 * lambdas(0, 2);
  const Scalar _tmp116 = _tmp91 - _tmp94;
  const Scalar _tmp117 = _tmp113 * _tmp56 + _tmp12 * _tmp50 + _tmp12 * _tmp53 + _tmp60 * _tmp97 -
                         _tmp64 * _tmp96 + _tmp65 * lambdas(1, 2);
  const Scalar _tmp118 = _tmp110 - _tmp111;
  const Scalar _tmp119 = _tmp100 + _tmp88;
  const Scalar _tmp120 = _tmp103 + _tmp104;
  const Scalar _tmp121 = _tmp102 * _tmp119 + _tmp118 * _tmp98 + _tmp120 * _tmp99;
  const Scalar _tmp122 = _tmp108 * _tmp80;
  const Scalar _tmp123 = -_tmp106 * _tmp109 + _tmp112 * _tmp114 + _tmp115 * _tmp78 +
                         _tmp116 * _tmp117 + _tmp121 * _tmp122 + _tmp67 * _tmp89;
  const Scalar _tmp124 = 2 * _x0[0] * _x0[3];
  const Scalar _tmp125 = 2 * _x0[2];
  const Scalar _tmp126 = _tmp125 * _x0[1];
  const Scalar _tmp127 = -_tmp124 + _tmp126;
  const Scalar _tmp128 = _tmp108 * _tmp78;
  const Scalar _tmp129 = _tmp102 * _tmp112 + _tmp116 * _tmp99 + _tmp89 * _tmp98;
  const Scalar _tmp130 = _tmp101 * _tmp117 + _tmp105 * _tmp114 + _tmp109 * _tmp129 +
                         _tmp115 * _tmp80 - _tmp121 * _tmp128 + _tmp67 * _tmp95;
  const Scalar _tmp131 = 2 * _x0[1];
  const Scalar _tmp132 = _tmp131 * _x0[0];
  const Scalar _tmp133 = _tmp125 * _x0[3];
  const Scalar _tmp134 = _tmp132 + _tmp133;
  const Scalar _tmp135 = _tmp106 * _tmp128 + _tmp114 * _tmp119 + _tmp115 * _tmp68 +
                         _tmp117 * _tmp120 + _tmp118 * _tmp67 - _tmp122 * _tmp129;
  const Scalar _tmp136 = _tmp123 * _tmp6 + _tmp127 * _tmp130 + _tmp134 * _tmp135;
  const Scalar _tmp137 = -_x1[6] + _x2[6];
  const Scalar _tmp138 = -_x2[6] + _x3[6];
  const Scalar _tmp139 = -_x0[6] + _x1[6];
  const Scalar _tmp140 =
      _tmp137 * lambdas(1, 0) + _tmp138 * lambdas(2, 0) + _tmp139 * lambdas(0, 0) + _x0[6];
  const Scalar _tmp141 =
      _tmp137 * lambdas(1, 1) + _tmp138 * lambdas(2, 1) + _tmp139 * lambdas(0, 1);
  const Scalar _tmp142 = _tmp128 + _tmp129;
  const Scalar _tmp143 = _tmp106 + _tmp122;
  const Scalar _tmp144 = _tmp109 + _tmp121;
  const Scalar _tmp145 = _tmp127 * _tmp143 + _tmp134 * _tmp144 + _tmp142 * _tmp6;
  const Scalar _tmp146 = _tmp124 + _tmp126;
  const Scalar _tmp147 = -2 * std::pow(_x0[1], Scalar(2));
  const Scalar _tmp148 = _tmp147 + _tmp4 + 1;
  const Scalar _tmp149 = _tmp131 * _x0[3];
  const Scalar _tmp150 = _tmp125 * _x0[0];
  const Scalar _tmp151 = -_tmp149 + _tmp150;
  const Scalar _tmp152 = _tmp123 * _tmp146 + _tmp130 * _tmp148 + _tmp135 * _tmp151;
  const Scalar _tmp153 = -_x1[5] + _x2[5];
  const Scalar _tmp154 = -_x2[5] + _x3[5];
  const Scalar _tmp155 = -_x0[5] + _x1[5];
  const Scalar _tmp156 =
      _tmp153 * lambdas(1, 0) + _tmp154 * lambdas(2, 0) + _tmp155 * lambdas(0, 0) + _x0[5];
  const Scalar _tmp157 = _tmp142 * _tmp146 + _tmp143 * _tmp148 + _tmp144 * _tmp151;
  const Scalar _tmp158 =
      _tmp153 * lambdas(1, 1) + _tmp154 * lambdas(2, 1) + _tmp155 * lambdas(0, 1);
  const Scalar _tmp159 =
      _tmp0 * (_tmp1 * lambdas(1, 2) - _tmp136 * _tmp140 - _tmp141 * _tmp145 + _tmp152 * _tmp156 +
               _tmp157 * _tmp158 + _tmp2 * lambdas(2, 2) + _tmp3 * lambdas(0, 2)) -
      acceleration(3, 0);
  const Scalar _tmp160 = _tmp132 - _tmp133;
  const Scalar _tmp161 = _tmp149 + _tmp150;
  const Scalar _tmp162 = _tmp147 + _tmp5;
  const Scalar _tmp163 = _tmp123 * _tmp160 + _tmp130 * _tmp161 + _tmp135 * _tmp162;
  const Scalar _tmp164 = _tmp0 * _tmp163 - acceleration(0, 0);
  const Scalar _tmp165 = _tmp142 * _tmp160 + _tmp143 * _tmp161 + _tmp144 * _tmp162;
  const Scalar _tmp166 =
      _tmp1 * lambdas(1, 0) + _tmp2 * lambdas(2, 0) + _tmp3 * lambdas(0, 0) + _x0[4];
  const Scalar _tmp167 = _tmp1 * lambdas(1, 1) + _tmp2 * lambdas(2, 1) + _tmp3 * lambdas(0, 1);
  const Scalar _tmp168 =
      _tmp0 * (_tmp140 * _tmp163 + _tmp141 * _tmp165 - _tmp152 * _tmp166 + _tmp153 * lambdas(1, 2) +
               _tmp154 * lambdas(2, 2) + _tmp155 * lambdas(0, 2) - _tmp157 * _tmp167) -
      acceleration(4, 0);
  const Scalar _tmp169 = _tmp0 * _tmp152 - acceleration(2, 0);
  const Scalar _tmp170 = _tmp0 * _tmp136 - acceleration(1, 0);
  const Scalar _tmp171 = _tmp0 * (_tmp136 * _tmp166 + _tmp137 * lambdas(1, 2) +
                                  _tmp138 * lambdas(2, 2) + _tmp139 * lambdas(0, 2) +
                                  _tmp145 * _tmp167 - _tmp156 * _tmp163 - _tmp158 * _tmp165) -
                         acceleration(5, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp159 * sqrt_info(0, 3) + _tmp164 * sqrt_info(0, 0) + _tmp168 * sqrt_info(0, 4) +
               _tmp169 * sqrt_info(0, 2) + _tmp170 * sqrt_info(0, 1) + _tmp171 * sqrt_info(0, 5);
  _res(1, 0) = _tmp159 * sqrt_info(1, 3) + _tmp164 * sqrt_info(1, 0) + _tmp168 * sqrt_info(1, 4) +
               _tmp169 * sqrt_info(1, 2) + _tmp170 * sqrt_info(1, 1) + _tmp171 * sqrt_info(1, 5);
  _res(2, 0) = _tmp159 * sqrt_info(2, 3) + _tmp164 * sqrt_info(2, 0) + _tmp168 * sqrt_info(2, 4) +
               _tmp169 * sqrt_info(2, 2) + _tmp170 * sqrt_info(2, 1) + _tmp171 * sqrt_info(2, 5);
  _res(3, 0) = _tmp159 * sqrt_info(3, 3) + _tmp164 * sqrt_info(3, 0) + _tmp168 * sqrt_info(3, 4) +
               _tmp169 * sqrt_info(3, 2) + _tmp170 * sqrt_info(3, 1) + _tmp171 * sqrt_info(3, 5);
  _res(4, 0) = _tmp159 * sqrt_info(4, 3) + _tmp164 * sqrt_info(4, 0) + _tmp168 * sqrt_info(4, 4) +
               _tmp169 * sqrt_info(4, 2) + _tmp170 * sqrt_info(4, 1) + _tmp171 * sqrt_info(4, 5);
  _res(5, 0) = _tmp159 * sqrt_info(5, 3) + _tmp164 * sqrt_info(5, 0) + _tmp168 * sqrt_info(5, 4) +
               _tmp169 * sqrt_info(5, 2) + _tmp170 * sqrt_info(5, 1) + _tmp171 * sqrt_info(5, 5);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
