// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose2.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline3_pose2_acceleration_factor
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix33
 *     x0: Pose2
 *     x1: Pose2
 *     x2: Pose2
 *     x3: Pose2
 *     acceleration: Matrix31
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 *     res_D_x0: (3x4) jacobian (result_dim x storage_dim) of res (3) wrt arg x0 (4) (row-major)
 *     res_D_x1: (3x4) jacobian (result_dim x storage_dim) of res (3) wrt arg x1 (4) (row-major)
 *     res_D_x2: (3x4) jacobian (result_dim x storage_dim) of res (3) wrt arg x2 (4) (row-major)
 *     res_D_x3: (3x4) jacobian (result_dim x storage_dim) of res (3) wrt arg x3 (4) (row-major)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline3Pose2AccelerationLocalFactorWithJacobians2345(
    const Scalar dt, const Eigen::Matrix<Scalar, 3, 3>& lambdas, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const Eigen::Matrix<Scalar, 3, 1>& acceleration, const Eigen::Matrix<Scalar, 3, 3>& sqrt_info,
    const Scalar epsilon, Scalar* const res_D_x0 = nullptr, Scalar* const res_D_x1 = nullptr,
    Scalar* const res_D_x2 = nullptr, Scalar* const res_D_x3 = nullptr) {
  // Total ops: 597

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();

  // Intermediate terms (188)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));
  const Scalar _tmp1 = _x2[1] * _x3[0];
  const Scalar _tmp2 = _x2[0] * _x3[1];
  const Scalar _tmp3 = -_tmp1 + _tmp2;
  const Scalar _tmp4 = _x2[0] * _x3[0];
  const Scalar _tmp5 = _x2[1] * _x3[1];
  const Scalar _tmp6 = _tmp4 + _tmp5;
  const Scalar _tmp7 = _tmp6 + epsilon * ((((_tmp6) > 0) - ((_tmp6) < 0)) + Scalar(0.5));
  const Scalar _tmp8 = std::atan2(_tmp3, _tmp7);
  const Scalar _tmp9 = _x1[0] * _x2[1];
  const Scalar _tmp10 = _x1[1] * _x2[0];
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = _x1[0] * _x2[0];
  const Scalar _tmp13 = _x1[1] * _x2[1];
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = _tmp14 + epsilon * ((((_tmp14) > 0) - ((_tmp14) < 0)) + Scalar(0.5));
  const Scalar _tmp16 = std::atan2(_tmp11, _tmp15);
  const Scalar _tmp17 = _x0[1] * _x1[0];
  const Scalar _tmp18 = _x0[0] * _x1[1];
  const Scalar _tmp19 = -_tmp17 + _tmp18;
  const Scalar _tmp20 = _x0[1] * _x1[1];
  const Scalar _tmp21 = _x0[0] * _x1[0];
  const Scalar _tmp22 = _tmp20 + _tmp21;
  const Scalar _tmp23 = _tmp22 + epsilon * ((((_tmp22) > 0) - ((_tmp22) < 0)) + Scalar(0.5));
  const Scalar _tmp24 = std::atan2(_tmp19, _tmp23);
  const Scalar _tmp25 =
      _tmp0 * (_tmp16 * lambdas(1, 2) + _tmp24 * lambdas(0, 2) + _tmp8 * lambdas(2, 2)) -
      acceleration(0, 0);
  const Scalar _tmp26 = _tmp24 * lambdas(0, 0);
  const Scalar _tmp27 = std::cos(_tmp26);
  const Scalar _tmp28 = _tmp27 * _x0[0];
  const Scalar _tmp29 = std::sin(_tmp26);
  const Scalar _tmp30 = _tmp29 * _x0[1];
  const Scalar _tmp31 = _tmp28 - _tmp30;
  const Scalar _tmp32 = _tmp16 * lambdas(1, 0);
  const Scalar _tmp33 = std::sin(_tmp32);
  const Scalar _tmp34 = _tmp31 * _tmp33;
  const Scalar _tmp35 = _tmp29 * _x0[0];
  const Scalar _tmp36 = _tmp27 * _x0[1];
  const Scalar _tmp37 = _tmp35 + _tmp36;
  const Scalar _tmp38 = std::cos(_tmp32);
  const Scalar _tmp39 = _tmp37 * _tmp38;
  const Scalar _tmp40 = _tmp34 + _tmp39;
  const Scalar _tmp41 = _tmp8 * lambdas(2, 0);
  const Scalar _tmp42 = std::cos(_tmp41);
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp31 * _tmp38;
  const Scalar _tmp45 = _tmp33 * _tmp37;
  const Scalar _tmp46 = _tmp44 - _tmp45;
  const Scalar _tmp47 = std::sin(_tmp41);
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp43 + _tmp48;
  const Scalar _tmp50 = -_x2[2] + _x3[2];
  const Scalar _tmp51 = -_x1[2] + _x2[2];
  const Scalar _tmp52 = -_x0[2] + _x1[2];
  const Scalar _tmp53 = _tmp50 * lambdas(2, 1) + _tmp51 * lambdas(1, 1) + _tmp52 * lambdas(0, 1);
  const Scalar _tmp54 = _tmp40 * _tmp47;
  const Scalar _tmp55 = _tmp42 * _tmp46;
  const Scalar _tmp56 = -_tmp54 + _tmp55;
  const Scalar _tmp57 = -_x2[3] + _x3[3];
  const Scalar _tmp58 = -_x1[3] + _x2[3];
  const Scalar _tmp59 = -_x0[3] + _x1[3];
  const Scalar _tmp60 = _tmp57 * lambdas(2, 1) + _tmp58 * lambdas(1, 1) + _tmp59 * lambdas(0, 1);
  const Scalar _tmp61 = -_tmp49 * _tmp53 + _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp16 * lambdas(1, 1) + _tmp24 * lambdas(0, 1) + _tmp8 * lambdas(2, 1);
  const Scalar _tmp63 = _tmp50 * lambdas(2, 2) + _tmp51 * lambdas(1, 2) + _tmp52 * lambdas(0, 2);
  const Scalar _tmp64 = _tmp57 * lambdas(2, 2) + _tmp58 * lambdas(1, 2) + _tmp59 * lambdas(0, 2);
  const Scalar _tmp65 =
      _tmp0 * (_tmp49 * _tmp64 + _tmp56 * _tmp63 + _tmp61 * _tmp62) - acceleration(1, 0);
  const Scalar _tmp66 = _tmp49 * _tmp60 + _tmp53 * _tmp56;
  const Scalar _tmp67 =
      _tmp0 * (-_tmp49 * _tmp63 + _tmp56 * _tmp64 - _tmp62 * _tmp66) - acceleration(2, 0);
  const Scalar _tmp68 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp69 = std::pow(_tmp23, Scalar(2));
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp23);
  const Scalar _tmp72 = _tmp69 / (_tmp68 + _tmp69);
  const Scalar _tmp73 = _tmp72 * (-_tmp68 * _tmp70 + _tmp71 * (-_tmp20 - _tmp21));
  const Scalar _tmp74 = _tmp73 * lambdas(0, 1);
  const Scalar _tmp75 = _tmp73 * lambdas(0, 0);
  const Scalar _tmp76 = -_tmp35 * _tmp75 - _tmp35 - _tmp36 * _tmp75 - _tmp36;
  const Scalar _tmp77 = _tmp28 * _tmp75 - _tmp30 * _tmp75 + _tmp31;
  const Scalar _tmp78 = -_tmp33 * _tmp77 + _tmp38 * _tmp76;
  const Scalar _tmp79 = _tmp33 * _tmp76 + _tmp38 * _tmp77;
  const Scalar _tmp80 = _tmp42 * _tmp79 + _tmp47 * _tmp78;
  const Scalar _tmp81 = _tmp42 * _tmp78 - _tmp47 * _tmp79;
  const Scalar _tmp82 = _tmp0 * (_tmp61 * _tmp74 + _tmp62 * (-_tmp53 * _tmp80 + _tmp60 * _tmp81) +
                                 _tmp63 * _tmp81 + _tmp64 * _tmp80);
  const Scalar _tmp83 = _tmp0 * sqrt_info(0, 0);
  const Scalar _tmp84 = _tmp73 * lambdas(0, 2);
  const Scalar _tmp85 = -_tmp62 * (_tmp53 * _tmp81 + _tmp60 * _tmp80) - _tmp63 * _tmp80 +
                        _tmp64 * _tmp81 - _tmp66 * _tmp74;
  const Scalar _tmp86 = _tmp0 * sqrt_info(0, 2);
  const Scalar _tmp87 = _tmp82 * sqrt_info(0, 1) + _tmp83 * _tmp84 + _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp0 * sqrt_info(1, 0);
  const Scalar _tmp89 = _tmp0 * sqrt_info(1, 2);
  const Scalar _tmp90 = _tmp82 * sqrt_info(1, 1) + _tmp84 * _tmp88 + _tmp85 * _tmp89;
  const Scalar _tmp91 = _tmp0 * sqrt_info(2, 0);
  const Scalar _tmp92 = _tmp0 * sqrt_info(2, 2);
  const Scalar _tmp93 = _tmp82 * sqrt_info(2, 1) + _tmp84 * _tmp91 + _tmp85 * _tmp92;
  const Scalar _tmp94 = _tmp56 * _tmp62;
  const Scalar _tmp95 = _tmp94 * lambdas(0, 1);
  const Scalar _tmp96 = _tmp49 * lambdas(0, 2);
  const Scalar _tmp97 = _tmp95 + _tmp96;
  const Scalar _tmp98 = _tmp49 * _tmp62;
  const Scalar _tmp99 = -_tmp56 * lambdas(0, 2) + _tmp98 * lambdas(0, 1);
  const Scalar _tmp100 = _tmp0 * _tmp99;
  const Scalar _tmp101 = _tmp0 * sqrt_info(2, 1);
  const Scalar _tmp102 = -_tmp95 - _tmp96;
  const Scalar _tmp103 = _tmp0 * _tmp102;
  const Scalar _tmp104 = _tmp72 * (-_tmp19 * _tmp70 * (_tmp17 - _tmp18) + _tmp22 * _tmp71);
  const Scalar _tmp105 = std::pow(_tmp11, Scalar(2));
  const Scalar _tmp106 = std::pow(_tmp15, Scalar(2));
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = Scalar(1.0) / (_tmp15);
  const Scalar _tmp109 = -_tmp105 * _tmp107 + _tmp108 * (-_tmp12 - _tmp13);
  const Scalar _tmp110 = _tmp106 / (_tmp105 + _tmp106);
  const Scalar _tmp111 = _tmp110 * lambdas(1, 1);
  const Scalar _tmp112 = _tmp104 * lambdas(0, 1) + _tmp109 * _tmp111;
  const Scalar _tmp113 = _tmp110 * lambdas(1, 0);
  const Scalar _tmp114 = _tmp109 * _tmp113;
  const Scalar _tmp115 = _tmp104 * lambdas(0, 0);
  const Scalar _tmp116 = _tmp115 * _tmp28 - _tmp115 * _tmp30;
  const Scalar _tmp117 = -_tmp115 * _tmp35 - _tmp115 * _tmp36;
  const Scalar _tmp118 = _tmp114 * _tmp44 - _tmp114 * _tmp45 + _tmp116 * _tmp38 + _tmp117 * _tmp33;
  const Scalar _tmp119 = _tmp113 * _tmp34;
  const Scalar _tmp120 =
      -_tmp109 * _tmp119 - _tmp114 * _tmp39 - _tmp116 * _tmp33 + _tmp117 * _tmp38;
  const Scalar _tmp121 = _tmp118 * _tmp42 + _tmp120 * _tmp47;
  const Scalar _tmp122 = -_tmp118 * _tmp47 + _tmp120 * _tmp42;
  const Scalar _tmp123 = _tmp112 * _tmp61 + _tmp121 * _tmp64 + _tmp122 * _tmp63 +
                         _tmp62 * (-_tmp121 * _tmp53 + _tmp122 * _tmp60);
  const Scalar _tmp124 = _tmp0 * _tmp123;
  const Scalar _tmp125 = -_tmp112 * _tmp66 - _tmp121 * _tmp63 + _tmp122 * _tmp64 -
                         _tmp62 * (_tmp121 * _tmp60 + _tmp122 * _tmp53);
  const Scalar _tmp126 = _tmp110 * lambdas(1, 2);
  const Scalar _tmp127 = _tmp0 * (_tmp104 * lambdas(0, 2) + _tmp109 * _tmp126);
  const Scalar _tmp128 = _tmp124 * sqrt_info(0, 1) + _tmp125 * _tmp86 + _tmp127 * sqrt_info(0, 0);
  const Scalar _tmp129 = _tmp124 * sqrt_info(1, 1) + _tmp125 * _tmp89 + _tmp127 * sqrt_info(1, 0);
  const Scalar _tmp130 = _tmp101 * _tmp123 + _tmp125 * _tmp92 + _tmp127 * sqrt_info(2, 0);
  const Scalar _tmp131 = lambdas(0, 2) - lambdas(1, 2);
  const Scalar _tmp132 = lambdas(0, 1) - lambdas(1, 1);
  const Scalar _tmp133 = _tmp131 * _tmp56 - _tmp132 * _tmp98;
  const Scalar _tmp134 = _tmp0 * _tmp133;
  const Scalar _tmp135 = _tmp131 * _tmp49;
  const Scalar _tmp136 = _tmp132 * _tmp94;
  const Scalar _tmp137 = -_tmp135 - _tmp136;
  const Scalar _tmp138 = _tmp0 * _tmp137;
  const Scalar _tmp139 = _tmp0 * (_tmp135 + _tmp136);
  const Scalar _tmp140 = std::pow(_tmp3, Scalar(2));
  const Scalar _tmp141 = std::pow(_tmp7, Scalar(2));
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = Scalar(1.0) / (_tmp7);
  const Scalar _tmp144 = _tmp141 / (_tmp140 + _tmp141);
  const Scalar _tmp145 = _tmp144 * (-_tmp140 * _tmp142 + _tmp143 * (-_tmp4 - _tmp5));
  const Scalar _tmp146 = -_tmp107 * _tmp11 * (_tmp10 - _tmp9) + _tmp108 * _tmp14;
  const Scalar _tmp147 = _tmp111 * _tmp146 + _tmp145 * lambdas(2, 1);
  const Scalar _tmp148 = _tmp113 * _tmp146;
  const Scalar _tmp149 = _tmp148 * _tmp44 - _tmp148 * _tmp45;
  const Scalar _tmp150 = _tmp145 * lambdas(2, 0);
  const Scalar _tmp151 = -_tmp119 * _tmp146 - _tmp148 * _tmp39;
  const Scalar _tmp152 = -_tmp149 * _tmp47 - _tmp150 * _tmp43 - _tmp150 * _tmp48 + _tmp151 * _tmp42;
  const Scalar _tmp153 = _tmp149 * _tmp42 - _tmp150 * _tmp54 + _tmp150 * _tmp55 + _tmp151 * _tmp47;
  const Scalar _tmp154 = -_tmp147 * _tmp66 + _tmp152 * _tmp64 - _tmp153 * _tmp63 -
                         _tmp62 * (_tmp152 * _tmp53 + _tmp153 * _tmp60);
  const Scalar _tmp155 = _tmp0 * (_tmp126 * _tmp146 + _tmp145 * lambdas(2, 2));
  const Scalar _tmp156 = _tmp147 * _tmp61 + _tmp152 * _tmp63 + _tmp153 * _tmp64 +
                         _tmp62 * (_tmp152 * _tmp60 - _tmp153 * _tmp53);
  const Scalar _tmp157 = _tmp0 * _tmp156;
  const Scalar _tmp158 = _tmp154 * _tmp86 + _tmp155 * sqrt_info(0, 0) + _tmp157 * sqrt_info(0, 1);
  const Scalar _tmp159 = _tmp154 * _tmp89 + _tmp155 * sqrt_info(1, 0) + _tmp157 * sqrt_info(1, 1);
  const Scalar _tmp160 = _tmp101 * _tmp156 + _tmp154 * _tmp92 + _tmp155 * sqrt_info(2, 0);
  const Scalar _tmp161 = lambdas(1, 2) - lambdas(2, 2);
  const Scalar _tmp162 = _tmp161 * _tmp49;
  const Scalar _tmp163 = lambdas(1, 1) - lambdas(2, 1);
  const Scalar _tmp164 = _tmp163 * _tmp94;
  const Scalar _tmp165 = -_tmp162 - _tmp164;
  const Scalar _tmp166 = _tmp161 * _tmp56 - _tmp163 * _tmp98;
  const Scalar _tmp167 = _tmp0 * _tmp166;
  const Scalar _tmp168 = _tmp0 * (_tmp162 + _tmp164);
  const Scalar _tmp169 = _tmp144 * (-_tmp142 * _tmp3 * (_tmp1 - _tmp2) + _tmp143 * _tmp6);
  const Scalar _tmp170 = _tmp169 * lambdas(2, 2);
  const Scalar _tmp171 = _tmp169 * lambdas(2, 0);
  const Scalar _tmp172 = -_tmp171 * _tmp54 + _tmp171 * _tmp55;
  const Scalar _tmp173 = -_tmp171 * _tmp43 - _tmp171 * _tmp48;
  const Scalar _tmp174 = _tmp169 * lambdas(2, 1);
  const Scalar _tmp175 = _tmp172 * _tmp64 + _tmp173 * _tmp63 + _tmp174 * _tmp61 +
                         _tmp62 * (-_tmp172 * _tmp53 + _tmp173 * _tmp60);
  const Scalar _tmp176 = _tmp0 * _tmp175;
  const Scalar _tmp177 = -_tmp172 * _tmp63 + _tmp173 * _tmp64 - _tmp174 * _tmp66 -
                         _tmp62 * (_tmp172 * _tmp60 + _tmp173 * _tmp53);
  const Scalar _tmp178 = _tmp170 * _tmp83 + _tmp176 * sqrt_info(0, 1) + _tmp177 * _tmp86;
  const Scalar _tmp179 = _tmp170 * _tmp88 + _tmp176 * sqrt_info(1, 1) + _tmp177 * _tmp89;
  const Scalar _tmp180 = _tmp101 * _tmp175 + _tmp170 * _tmp91 + _tmp177 * _tmp92;
  const Scalar _tmp181 = _tmp94 * lambdas(2, 1);
  const Scalar _tmp182 = _tmp49 * lambdas(2, 2);
  const Scalar _tmp183 = -_tmp181 - _tmp182;
  const Scalar _tmp184 = _tmp56 * lambdas(2, 2) - _tmp98 * lambdas(2, 1);
  const Scalar _tmp185 = _tmp0 * _tmp184;
  const Scalar _tmp186 = _tmp181 + _tmp182;
  const Scalar _tmp187 = _tmp0 * _tmp186;

  // Output terms (5)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp25 * sqrt_info(0, 0) + _tmp65 * sqrt_info(0, 1) + _tmp67 * sqrt_info(0, 2);
  _res(1, 0) = _tmp25 * sqrt_info(1, 0) + _tmp65 * sqrt_info(1, 1) + _tmp67 * sqrt_info(1, 2);
  _res(2, 0) = _tmp25 * sqrt_info(2, 0) + _tmp65 * sqrt_info(2, 1) + _tmp67 * sqrt_info(2, 2);

  if (res_D_x0 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x0{res_D_x0};

    _res_D_x0(0, 0) = -_tmp87 * _x0[1];
    _res_D_x0(1, 0) = -_tmp90 * _x0[1];
    _res_D_x0(2, 0) = -_tmp93 * _x0[1];
    _res_D_x0(0, 1) = _tmp87 * _x0[0];
    _res_D_x0(1, 1) = _tmp90 * _x0[0];
    _res_D_x0(2, 1) = _tmp93 * _x0[0];
    _res_D_x0(0, 2) = _tmp100 * sqrt_info(0, 1) + _tmp86 * _tmp97;
    _res_D_x0(1, 2) = _tmp100 * sqrt_info(1, 1) + _tmp89 * _tmp97;
    _res_D_x0(2, 2) = _tmp101 * _tmp99 + _tmp92 * _tmp97;
    _res_D_x0(0, 3) = _tmp103 * sqrt_info(0, 1) + _tmp86 * _tmp99;
    _res_D_x0(1, 3) = _tmp103 * sqrt_info(1, 1) + _tmp89 * _tmp99;
    _res_D_x0(2, 3) = _tmp101 * _tmp102 + _tmp92 * _tmp99;
  }

  if (res_D_x1 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x1{res_D_x1};

    _res_D_x1(0, 0) = -_tmp128 * _x1[1];
    _res_D_x1(1, 0) = -_tmp129 * _x1[1];
    _res_D_x1(2, 0) = -_tmp130 * _x1[1];
    _res_D_x1(0, 1) = _tmp128 * _x1[0];
    _res_D_x1(1, 1) = _tmp129 * _x1[0];
    _res_D_x1(2, 1) = _tmp130 * _x1[0];
    _res_D_x1(0, 2) = _tmp134 * sqrt_info(0, 1) + _tmp138 * sqrt_info(0, 2);
    _res_D_x1(1, 2) = _tmp134 * sqrt_info(1, 1) + _tmp137 * _tmp89;
    _res_D_x1(2, 2) = _tmp134 * sqrt_info(2, 1) + _tmp138 * sqrt_info(2, 2);
    _res_D_x1(0, 3) = _tmp133 * _tmp86 + _tmp139 * sqrt_info(0, 1);
    _res_D_x1(1, 3) = _tmp133 * _tmp89 + _tmp139 * sqrt_info(1, 1);
    _res_D_x1(2, 3) = _tmp133 * _tmp92 + _tmp139 * sqrt_info(2, 1);
  }

  if (res_D_x2 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x2{res_D_x2};

    _res_D_x2(0, 0) = -_tmp158 * _x2[1];
    _res_D_x2(1, 0) = -_tmp159 * _x2[1];
    _res_D_x2(2, 0) = -_tmp160 * _x2[1];
    _res_D_x2(0, 1) = _tmp158 * _x2[0];
    _res_D_x2(1, 1) = _tmp159 * _x2[0];
    _res_D_x2(2, 1) = _tmp160 * _x2[0];
    _res_D_x2(0, 2) = _tmp165 * _tmp86 + _tmp167 * sqrt_info(0, 1);
    _res_D_x2(1, 2) = _tmp165 * _tmp89 + _tmp167 * sqrt_info(1, 1);
    _res_D_x2(2, 2) = _tmp101 * _tmp166 + _tmp165 * _tmp92;
    _res_D_x2(0, 3) = _tmp166 * _tmp86 + _tmp168 * sqrt_info(0, 1);
    _res_D_x2(1, 3) = _tmp166 * _tmp89 + _tmp168 * sqrt_info(1, 1);
    _res_D_x2(2, 3) = _tmp166 * _tmp92 + _tmp168 * sqrt_info(2, 1);
  }

  if (res_D_x3 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x3{res_D_x3};

    _res_D_x3(0, 0) = -_tmp178 * _x3[1];
    _res_D_x3(1, 0) = -_tmp179 * _x3[1];
    _res_D_x3(2, 0) = -_tmp180 * _x3[1];
    _res_D_x3(0, 1) = _tmp178 * _x3[0];
    _res_D_x3(1, 1) = _tmp179 * _x3[0];
    _res_D_x3(2, 1) = _tmp180 * _x3[0];
    _res_D_x3(0, 2) = _tmp183 * _tmp86 + _tmp185 * sqrt_info(0, 1);
    _res_D_x3(1, 2) = _tmp183 * _tmp89 + _tmp185 * sqrt_info(1, 1);
    _res_D_x3(2, 2) = _tmp101 * _tmp184 + _tmp183 * _tmp92;
    _res_D_x3(0, 3) = _tmp184 * _tmp86 + _tmp187 * sqrt_info(0, 1);
    _res_D_x3(1, 3) = _tmp184 * _tmp89 + _tmp187 * sqrt_info(1, 1);
    _res_D_x3(2, 3) = _tmp101 * _tmp186 + _tmp184 * _tmp92;
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
