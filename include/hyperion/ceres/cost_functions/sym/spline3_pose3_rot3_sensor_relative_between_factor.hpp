// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline3_pose3_rot3_sensor_relative_between_factor
 *
 * Args:
 *     lambdas_x: Matrix31
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     x_T_a: Pose3
 *     a_T_b: Rot3
 *     lambdas_y: Matrix31
 *     y0: Pose3
 *     y1: Pose3
 *     y2: Pose3
 *     y3: Pose3
 *     y_T_b: Pose3
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline3Pose3Rot3SensorRelativeBetweenFactor(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas_x, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Pose3<Scalar>& x_T_a, const sym::Rot3<Scalar>& a_T_b,
    const Eigen::Matrix<Scalar, 3, 1>& lambdas_y, const sym::Pose3<Scalar>& y0,
    const sym::Pose3<Scalar>& y1, const sym::Pose3<Scalar>& y2, const sym::Pose3<Scalar>& y3,
    const sym::Pose3<Scalar>& y_T_b, const Eigen::Matrix<Scalar, 3, 3>& sqrt_info,
    const Scalar epsilon) {
  // Total ops: 736

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x_T_a = x_T_a.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _a_T_b = a_T_b.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y0 = y0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y1 = y1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y2 = y2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y3 = y3.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y_T_b = y_T_b.Data();

  // Intermediate terms (160)
  const Scalar _tmp0 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp1 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp2 = 1 - epsilon;
  const Scalar _tmp3 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp4 = _x1[3] * _x2[3];
  const Scalar _tmp5 = std::min<Scalar>(_tmp2, std::fabs(_tmp3 - _tmp4));
  const Scalar _tmp6 = 1 - std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 =
      2 * std::min<Scalar>(0, (((-_tmp3 + _tmp4) > 0) - ((-_tmp3 + _tmp4) < 0))) + 1;
  const Scalar _tmp8 = std::acos(_tmp5);
  const Scalar _tmp9 = 4 * std::pow(_tmp7, Scalar(2)) * std::pow(_tmp8, Scalar(2)) *
                       std::pow(lambdas_x(1, 0), Scalar(2)) / _tmp6;
  const Scalar _tmp10 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp11 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp12 =
      std::sqrt(Scalar(std::pow(_tmp0, Scalar(2)) * _tmp9 + std::pow(_tmp1, Scalar(2)) * _tmp9 +
                       std::pow(_tmp10, Scalar(2)) * _tmp9 + _tmp11));
  const Scalar _tmp13 = (Scalar(1) / Scalar(2)) * _tmp12;
  const Scalar _tmp14 =
      _tmp7 * _tmp8 * lambdas_x(1, 0) * std::sin(_tmp13) / (_tmp12 * std::sqrt(_tmp6));
  const Scalar _tmp15 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp16 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp17 = _x2[3] * _x3[3];
  const Scalar _tmp18 = std::min<Scalar>(_tmp2, std::fabs(_tmp16 - _tmp17));
  const Scalar _tmp19 = 1 - std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 =
      2 * std::min<Scalar>(0, (((-_tmp16 + _tmp17) > 0) - ((-_tmp16 + _tmp17) < 0))) + 1;
  const Scalar _tmp21 = std::acos(_tmp18);
  const Scalar _tmp22 = 4 * std::pow(_tmp20, Scalar(2)) * std::pow(_tmp21, Scalar(2)) *
                        std::pow(lambdas_x(2, 0), Scalar(2)) / _tmp19;
  const Scalar _tmp23 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp24 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp25 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp15, Scalar(2)) * _tmp22 +
                                         _tmp22 * std::pow(_tmp23, Scalar(2)) +
                                         _tmp22 * std::pow(_tmp24, Scalar(2))));
  const Scalar _tmp26 = (Scalar(1) / Scalar(2)) * _tmp25;
  const Scalar _tmp27 = std::cos(_tmp26);
  const Scalar _tmp28 = 2 * _tmp27;
  const Scalar _tmp29 = _tmp14 * _tmp28;
  const Scalar _tmp30 =
      _tmp20 * _tmp21 * lambdas_x(2, 0) * std::sin(_tmp26) / (std::sqrt(_tmp19) * _tmp25);
  const Scalar _tmp31 = std::cos(_tmp13);
  const Scalar _tmp32 = 2 * _tmp31;
  const Scalar _tmp33 = _tmp30 * _tmp32;
  const Scalar _tmp34 = _tmp1 * _tmp14;
  const Scalar _tmp35 = _tmp24 * _tmp30;
  const Scalar _tmp36 = 4 * _tmp35;
  const Scalar _tmp37 = _tmp10 * _tmp14;
  const Scalar _tmp38 = 4 * _tmp30;
  const Scalar _tmp39 = _tmp37 * _tmp38;
  const Scalar _tmp40 = _tmp0 * _tmp29 + _tmp15 * _tmp33 + _tmp23 * _tmp39 - _tmp34 * _tmp36;
  const Scalar _tmp41 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp42 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp43 = _x0[3] * _x1[3];
  const Scalar _tmp44 =
      2 * std::min<Scalar>(0, (((-_tmp42 + _tmp43) > 0) - ((-_tmp42 + _tmp43) < 0))) + 1;
  const Scalar _tmp45 = std::min<Scalar>(_tmp2, std::fabs(_tmp42 - _tmp43));
  const Scalar _tmp46 = std::acos(_tmp45);
  const Scalar _tmp47 = 1 - std::pow(_tmp45, Scalar(2));
  const Scalar _tmp48 = 4 * std::pow(_tmp44, Scalar(2)) * std::pow(_tmp46, Scalar(2)) *
                        std::pow(lambdas_x(0, 0), Scalar(2)) / _tmp47;
  const Scalar _tmp49 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp50 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp51 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp41, Scalar(2)) * _tmp48 +
                                         _tmp48 * std::pow(_tmp49, Scalar(2)) +
                                         _tmp48 * std::pow(_tmp50, Scalar(2))));
  const Scalar _tmp52 = (Scalar(1) / Scalar(2)) * _tmp51;
  const Scalar _tmp53 = std::cos(_tmp52);
  const Scalar _tmp54 = _tmp0 * _tmp14;
  const Scalar _tmp55 = -_tmp15 * _tmp39 + _tmp23 * _tmp33 + _tmp28 * _tmp34 + _tmp36 * _tmp54;
  const Scalar _tmp56 =
      2 * _tmp44 * _tmp46 * lambdas_x(0, 0) * std::sin(_tmp52) / (std::sqrt(_tmp47) * _tmp51);
  const Scalar _tmp57 = _tmp55 * _tmp56;
  const Scalar _tmp58 = _tmp15 * _tmp38;
  const Scalar _tmp59 = _tmp23 * _tmp38;
  const Scalar _tmp60 = _tmp10 * _tmp29 + _tmp32 * _tmp35 + _tmp34 * _tmp58 - _tmp54 * _tmp59;
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp27 * _tmp31 - _tmp34 * _tmp59 - _tmp36 * _tmp37 - _tmp54 * _tmp58;
  const Scalar _tmp63 = _tmp56 * _tmp62;
  const Scalar _tmp64 = _tmp40 * _tmp53 - _tmp41 * _tmp61 + _tmp49 * _tmp63 + _tmp50 * _tmp57;
  const Scalar _tmp65 = _tmp40 * _tmp56;
  const Scalar _tmp66 = _tmp41 * _tmp63 + _tmp49 * _tmp61 - _tmp50 * _tmp65 + _tmp53 * _tmp55;
  const Scalar _tmp67 = _tmp41 * _tmp65 - _tmp49 * _tmp57 + _tmp50 * _tmp63 + _tmp53 * _tmp60;
  const Scalar _tmp68 = -_tmp41 * _tmp57 - _tmp49 * _tmp65 - _tmp50 * _tmp61 + _tmp53 * _tmp62;
  const Scalar _tmp69 = -_tmp64 * _x0[2] + _tmp66 * _x0[3] + _tmp67 * _x0[1] + _tmp68 * _x0[0];
  const Scalar _tmp70 = _tmp64 * _x0[0] - _tmp66 * _x0[1] + _tmp67 * _x0[3] + _tmp68 * _x0[2];
  const Scalar _tmp71 = _tmp64 * _x0[3] + _tmp66 * _x0[2] - _tmp67 * _x0[0] + _tmp68 * _x0[1];
  const Scalar _tmp72 = -_tmp64 * _x0[1] - _tmp66 * _x0[0] - _tmp67 * _x0[2] + _tmp68 * _x0[3];
  const Scalar _tmp73 =
      -_tmp69 * _x_T_a[0] - _tmp70 * _x_T_a[2] - _tmp71 * _x_T_a[1] + _tmp72 * _x_T_a[3];
  const Scalar _tmp74 = -_y2[0] * _y3[1] + _y2[1] * _y3[0] - _y2[2] * _y3[3] + _y2[3] * _y3[2];
  const Scalar _tmp75 = -_y2[0] * _y3[0] - _y2[1] * _y3[1] - _y2[2] * _y3[2];
  const Scalar _tmp76 = _y2[3] * _y3[3];
  const Scalar _tmp77 =
      2 * std::min<Scalar>(0, (((-_tmp75 + _tmp76) > 0) - ((-_tmp75 + _tmp76) < 0))) + 1;
  const Scalar _tmp78 = std::min<Scalar>(_tmp2, std::fabs(_tmp75 - _tmp76));
  const Scalar _tmp79 = std::acos(_tmp78);
  const Scalar _tmp80 = -_y2[0] * _y3[3] - _y2[1] * _y3[2] + _y2[2] * _y3[1] + _y2[3] * _y3[0];
  const Scalar _tmp81 = 1 - std::pow(_tmp78, Scalar(2));
  const Scalar _tmp82 = 4 * std::pow(_tmp77, Scalar(2)) * std::pow(_tmp79, Scalar(2)) *
                        std::pow(lambdas_y(2, 0), Scalar(2)) / _tmp81;
  const Scalar _tmp83 = _y2[0] * _y3[2] - _y2[1] * _y3[3] - _y2[2] * _y3[0] + _y2[3] * _y3[1];
  const Scalar _tmp84 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp74, Scalar(2)) * _tmp82 +
                                         std::pow(_tmp80, Scalar(2)) * _tmp82 +
                                         _tmp82 * std::pow(_tmp83, Scalar(2))));
  const Scalar _tmp85 = (Scalar(1) / Scalar(2)) * _tmp84;
  const Scalar _tmp86 =
      _tmp77 * _tmp79 * lambdas_y(2, 0) * std::sin(_tmp85) / (std::sqrt(_tmp81) * _tmp84);
  const Scalar _tmp87 = 4 * _tmp86;
  const Scalar _tmp88 = _tmp74 * _tmp87;
  const Scalar _tmp89 = -_y1[0] * _y2[1] + _y1[1] * _y2[0] - _y1[2] * _y2[3] + _y1[3] * _y2[2];
  const Scalar _tmp90 = -_y1[0] * _y2[0] - _y1[1] * _y2[1] - _y1[2] * _y2[2];
  const Scalar _tmp91 = _y1[3] * _y2[3];
  const Scalar _tmp92 =
      2 * std::min<Scalar>(0, (((-_tmp90 + _tmp91) > 0) - ((-_tmp90 + _tmp91) < 0))) + 1;
  const Scalar _tmp93 = std::min<Scalar>(_tmp2, std::fabs(_tmp90 - _tmp91));
  const Scalar _tmp94 = 1 - std::pow(_tmp93, Scalar(2));
  const Scalar _tmp95 = std::acos(_tmp93);
  const Scalar _tmp96 = 4 * std::pow(_tmp92, Scalar(2)) * std::pow(_tmp95, Scalar(2)) *
                        std::pow(lambdas_y(1, 0), Scalar(2)) / _tmp94;
  const Scalar _tmp97 = -_y1[0] * _y2[3] - _y1[1] * _y2[2] + _y1[2] * _y2[1] + _y1[3] * _y2[0];
  const Scalar _tmp98 = _y1[0] * _y2[2] - _y1[1] * _y2[3] - _y1[2] * _y2[0] + _y1[3] * _y2[1];
  const Scalar _tmp99 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp89, Scalar(2)) * _tmp96 +
                                         _tmp96 * std::pow(_tmp97, Scalar(2)) +
                                         _tmp96 * std::pow(_tmp98, Scalar(2))));
  const Scalar _tmp100 = (Scalar(1) / Scalar(2)) * _tmp99;
  const Scalar _tmp101 =
      _tmp92 * _tmp95 * lambdas_y(1, 0) * std::sin(_tmp100) / (std::sqrt(_tmp94) * _tmp99);
  const Scalar _tmp102 = _tmp101 * _tmp89;
  const Scalar _tmp103 = _tmp80 * _tmp87;
  const Scalar _tmp104 = _tmp101 * _tmp97;
  const Scalar _tmp105 = _tmp101 * _tmp98;
  const Scalar _tmp106 = _tmp83 * _tmp86;
  const Scalar _tmp107 = 4 * _tmp106;
  const Scalar _tmp108 = std::cos(_tmp100);
  const Scalar _tmp109 = std::cos(_tmp85);
  const Scalar _tmp110 =
      -_tmp102 * _tmp88 - _tmp103 * _tmp104 - _tmp105 * _tmp107 + _tmp108 * _tmp109;
  const Scalar _tmp111 = -_y0[0] * _y1[3] - _y0[1] * _y1[2] + _y0[2] * _y1[1] + _y0[3] * _y1[0];
  const Scalar _tmp112 = -_y0[0] * _y1[1] + _y0[1] * _y1[0] - _y0[2] * _y1[3] + _y0[3] * _y1[2];
  const Scalar _tmp113 = _y0[0] * _y1[0] + _y0[1] * _y1[1] + _y0[2] * _y1[2] + _y0[3] * _y1[3];
  const Scalar _tmp114 = 2 * std::min<Scalar>(0, (((_tmp113) > 0) - ((_tmp113) < 0))) + 1;
  const Scalar _tmp115 = std::min<Scalar>(_tmp2, std::fabs(_tmp113));
  const Scalar _tmp116 = std::acos(_tmp115);
  const Scalar _tmp117 = 1 - std::pow(_tmp115, Scalar(2));
  const Scalar _tmp118 = 4 * std::pow(_tmp114, Scalar(2)) * std::pow(_tmp116, Scalar(2)) *
                         std::pow(lambdas_y(0, 0), Scalar(2)) / _tmp117;
  const Scalar _tmp119 = _y0[0] * _y1[2] - _y0[1] * _y1[3] - _y0[2] * _y1[0] + _y0[3] * _y1[1];
  const Scalar _tmp120 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp111, Scalar(2)) * _tmp118 +
                                          std::pow(_tmp112, Scalar(2)) * _tmp118 +
                                          _tmp118 * std::pow(_tmp119, Scalar(2))));
  const Scalar _tmp121 = (Scalar(1) / Scalar(2)) * _tmp120;
  const Scalar _tmp122 =
      2 * _tmp114 * _tmp116 * lambdas_y(0, 0) * std::sin(_tmp121) / (std::sqrt(_tmp117) * _tmp120);
  const Scalar _tmp123 = _tmp111 * _tmp122;
  const Scalar _tmp124 = 2 * _tmp109;
  const Scalar _tmp125 = _tmp101 * _tmp124;
  const Scalar _tmp126 = 2 * _tmp108;
  const Scalar _tmp127 = _tmp126 * _tmp86;
  const Scalar _tmp128 =
      -_tmp102 * _tmp107 + _tmp105 * _tmp88 + _tmp125 * _tmp97 + _tmp127 * _tmp80;
  const Scalar _tmp129 = std::cos(_tmp121);
  const Scalar _tmp130 =
      -_tmp103 * _tmp105 + _tmp104 * _tmp107 + _tmp125 * _tmp89 + _tmp127 * _tmp74;
  const Scalar _tmp131 = _tmp119 * _tmp122;
  const Scalar _tmp132 =
      _tmp102 * _tmp103 - _tmp104 * _tmp88 + _tmp105 * _tmp124 + _tmp106 * _tmp126;
  const Scalar _tmp133 = _tmp112 * _tmp122;
  const Scalar _tmp134 =
      _tmp110 * _tmp123 + _tmp128 * _tmp129 + _tmp130 * _tmp131 - _tmp132 * _tmp133;
  const Scalar _tmp135 = _tmp122 * _tmp128;
  const Scalar _tmp136 =
      _tmp110 * _tmp129 - _tmp111 * _tmp135 - _tmp130 * _tmp133 - _tmp131 * _tmp132;
  const Scalar _tmp137 =
      _tmp110 * _tmp131 + _tmp112 * _tmp135 - _tmp123 * _tmp130 + _tmp129 * _tmp132;
  const Scalar _tmp138 =
      _tmp110 * _tmp133 + _tmp123 * _tmp132 - _tmp128 * _tmp131 + _tmp129 * _tmp130;
  const Scalar _tmp139 = _tmp134 * _y0[3] + _tmp136 * _y0[0] - _tmp137 * _y0[2] + _tmp138 * _y0[1];
  const Scalar _tmp140 = -_tmp134 * _y0[1] + _tmp136 * _y0[2] + _tmp137 * _y0[0] + _tmp138 * _y0[3];
  const Scalar _tmp141 = _tmp134 * _y0[2] + _tmp136 * _y0[1] + _tmp137 * _y0[3] - _tmp138 * _y0[0];
  const Scalar _tmp142 = -_tmp134 * _y0[0] + _tmp136 * _y0[3] - _tmp137 * _y0[1] - _tmp138 * _y0[2];
  const Scalar _tmp143 =
      -_tmp139 * _y_T_b[0] - _tmp140 * _y_T_b[2] - _tmp141 * _y_T_b[1] + _tmp142 * _y_T_b[3];
  const Scalar _tmp144 =
      _tmp69 * _x_T_a[3] - _tmp70 * _x_T_a[1] + _tmp71 * _x_T_a[2] + _tmp72 * _x_T_a[0];
  const Scalar _tmp145 =
      _tmp139 * _y_T_b[3] - _tmp140 * _y_T_b[1] + _tmp141 * _y_T_b[2] + _tmp142 * _y_T_b[0];
  const Scalar _tmp146 =
      -_tmp69 * _x_T_a[2] + _tmp70 * _x_T_a[0] + _tmp71 * _x_T_a[3] + _tmp72 * _x_T_a[1];
  const Scalar _tmp147 =
      -_tmp139 * _y_T_b[2] + _tmp140 * _y_T_b[0] + _tmp141 * _y_T_b[3] + _tmp142 * _y_T_b[1];
  const Scalar _tmp148 =
      _tmp69 * _x_T_a[1] + _tmp70 * _x_T_a[3] - _tmp71 * _x_T_a[0] + _tmp72 * _x_T_a[2];
  const Scalar _tmp149 =
      _tmp139 * _y_T_b[1] + _tmp140 * _y_T_b[3] - _tmp141 * _y_T_b[0] + _tmp142 * _y_T_b[2];
  const Scalar _tmp150 =
      _tmp143 * _tmp73 + _tmp144 * _tmp145 + _tmp146 * _tmp147 + _tmp148 * _tmp149;
  const Scalar _tmp151 =
      -_tmp143 * _tmp148 - _tmp144 * _tmp147 + _tmp145 * _tmp146 + _tmp149 * _tmp73;
  const Scalar _tmp152 =
      -_tmp143 * _tmp146 + _tmp144 * _tmp149 - _tmp145 * _tmp148 + _tmp147 * _tmp73;
  const Scalar _tmp153 =
      -_tmp143 * _tmp144 + _tmp145 * _tmp73 - _tmp146 * _tmp149 + _tmp147 * _tmp148;
  const Scalar _tmp154 =
      _a_T_b[0] * _tmp153 + _a_T_b[1] * _tmp152 + _a_T_b[2] * _tmp151 + _a_T_b[3] * _tmp150;
  const Scalar _tmp155 = std::min<Scalar>(_tmp2, std::fabs(_tmp154));
  const Scalar _tmp156 = 2 * (2 * std::min<Scalar>(0, (((_tmp154) > 0) - ((_tmp154) < 0))) + 1) *
                         std::acos(_tmp155) / std::sqrt(Scalar(1 - std::pow(_tmp155, Scalar(2))));
  const Scalar _tmp157 = _tmp156 * (-_a_T_b[0] * _tmp152 + _a_T_b[1] * _tmp153 -
                                    _a_T_b[2] * _tmp150 + _a_T_b[3] * _tmp151);
  const Scalar _tmp158 = _tmp156 * (-_a_T_b[0] * _tmp150 - _a_T_b[1] * _tmp151 +
                                    _a_T_b[2] * _tmp152 + _a_T_b[3] * _tmp153);
  const Scalar _tmp159 = _tmp156 * (_a_T_b[0] * _tmp151 - _a_T_b[1] * _tmp150 -
                                    _a_T_b[2] * _tmp153 + _a_T_b[3] * _tmp152);

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp157 * sqrt_info(0, 2) + _tmp158 * sqrt_info(0, 0) + _tmp159 * sqrt_info(0, 1);
  _res(1, 0) = _tmp157 * sqrt_info(1, 2) + _tmp158 * sqrt_info(1, 0) + _tmp159 * sqrt_info(1, 1);
  _res(2, 0) = _tmp157 * sqrt_info(2, 2) + _tmp158 * sqrt_info(2, 0) + _tmp159 * sqrt_info(2, 1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
