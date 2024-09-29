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
Eigen::Matrix<Scalar, 3, 1> Spline3Pose2AccelerationGlobalFactorWithJacobians2345(
    const Scalar dt, const Eigen::Matrix<Scalar, 3, 3>& lambdas, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const Eigen::Matrix<Scalar, 3, 1>& acceleration, const Eigen::Matrix<Scalar, 3, 3>& sqrt_info,
    const Scalar epsilon, Scalar* const res_D_x0 = nullptr, Scalar* const res_D_x1 = nullptr,
    Scalar* const res_D_x2 = nullptr, Scalar* const res_D_x3 = nullptr) {
  // Total ops: 424

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();

  // Intermediate terms (122)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));
  const Scalar _tmp1 = -_x2[2] + _x3[2];
  const Scalar _tmp2 = -_x1[2] + _x2[2];
  const Scalar _tmp3 = -_x0[2] + _x1[2];
  const Scalar _tmp4 = _x2[1] * _x3[0];
  const Scalar _tmp5 = _x2[0] * _x3[1];
  const Scalar _tmp6 = -_tmp4 + _tmp5;
  const Scalar _tmp7 = _x2[0] * _x3[0];
  const Scalar _tmp8 = _x2[1] * _x3[1];
  const Scalar _tmp9 = _tmp7 + _tmp8;
  const Scalar _tmp10 = _tmp9 + epsilon * ((((_tmp9) > 0) - ((_tmp9) < 0)) + Scalar(0.5));
  const Scalar _tmp11 = std::atan2(_tmp6, _tmp10);
  const Scalar _tmp12 = _x1[0] * _x2[1];
  const Scalar _tmp13 = _x1[1] * _x2[0];
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = _x1[0] * _x2[0];
  const Scalar _tmp16 = _x1[1] * _x2[1];
  const Scalar _tmp17 = _tmp15 + _tmp16;
  const Scalar _tmp18 = _tmp17 + epsilon * ((((_tmp17) > 0) - ((_tmp17) < 0)) + Scalar(0.5));
  const Scalar _tmp19 = std::atan2(_tmp14, _tmp18);
  const Scalar _tmp20 = _x0[1] * _x1[0];
  const Scalar _tmp21 = _x0[0] * _x1[1];
  const Scalar _tmp22 = -_tmp20 + _tmp21;
  const Scalar _tmp23 = _x0[1] * _x1[1];
  const Scalar _tmp24 = _x0[0] * _x1[0];
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = _tmp25 + epsilon * ((((_tmp25) > 0) - ((_tmp25) < 0)) + Scalar(0.5));
  const Scalar _tmp27 = std::atan2(_tmp22, _tmp26);
  const Scalar _tmp28 = _tmp11 * lambdas(2, 2) + _tmp19 * lambdas(1, 2) + _tmp27 * lambdas(0, 2);
  const Scalar _tmp29 = -_x2[3] + _x3[3];
  const Scalar _tmp30 = -_x1[3] + _x2[3];
  const Scalar _tmp31 = -_x0[3] + _x1[3];
  const Scalar _tmp32 =
      _tmp29 * lambdas(2, 0) + _tmp30 * lambdas(1, 0) + _tmp31 * lambdas(0, 0) + _x0[3];
  const Scalar _tmp33 = _tmp11 * lambdas(2, 1) + _tmp19 * lambdas(1, 1) + _tmp27 * lambdas(0, 1);
  const Scalar _tmp34 = _tmp29 * lambdas(2, 1) + _tmp30 * lambdas(1, 1) + _tmp31 * lambdas(0, 1);
  const Scalar _tmp35 = _tmp0 * (_tmp1 * lambdas(2, 2) + _tmp2 * lambdas(1, 2) + _tmp28 * _tmp32 +
                                 _tmp3 * lambdas(0, 2) + _tmp33 * _tmp34) -
                        acceleration(1, 0);
  const Scalar _tmp36 = _tmp0 * _tmp28 - acceleration(0, 0);
  const Scalar _tmp37 =
      _tmp1 * lambdas(2, 0) + _tmp2 * lambdas(1, 0) + _tmp3 * lambdas(0, 0) + _x0[2];
  const Scalar _tmp38 = _tmp1 * lambdas(2, 1) + _tmp2 * lambdas(1, 1) + _tmp3 * lambdas(0, 1);
  const Scalar _tmp39 =
      _tmp0 * (-_tmp28 * _tmp37 + _tmp29 * lambdas(2, 2) + _tmp30 * lambdas(1, 2) +
               _tmp31 * lambdas(0, 2) - _tmp33 * _tmp38) -
      acceleration(2, 0);
  const Scalar _tmp40 = std::pow(_tmp22, Scalar(2));
  const Scalar _tmp41 = std::pow(_tmp26, Scalar(2));
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = Scalar(1.0) / (_tmp26);
  const Scalar _tmp44 = _tmp41 / (_tmp40 + _tmp41);
  const Scalar _tmp45 = _tmp44 * (-_tmp40 * _tmp42 + _tmp43 * (-_tmp23 - _tmp24));
  const Scalar _tmp46 = _tmp45 * lambdas(0, 2);
  const Scalar _tmp47 = _tmp45 * lambdas(0, 1);
  const Scalar _tmp48 = _tmp0 * (_tmp32 * _tmp46 + _tmp34 * _tmp47);
  const Scalar _tmp49 = -_tmp37 * _tmp46 - _tmp38 * _tmp47;
  const Scalar _tmp50 = _tmp0 * sqrt_info(0, 2);
  const Scalar _tmp51 = _tmp0 * _tmp46;
  const Scalar _tmp52 = _tmp48 * sqrt_info(0, 1) + _tmp49 * _tmp50 + _tmp51 * sqrt_info(0, 0);
  const Scalar _tmp53 = _tmp0 * _tmp49;
  const Scalar _tmp54 =
      _tmp48 * sqrt_info(1, 1) + _tmp51 * sqrt_info(1, 0) + _tmp53 * sqrt_info(1, 2);
  const Scalar _tmp55 =
      _tmp48 * sqrt_info(2, 1) + _tmp51 * sqrt_info(2, 0) + _tmp53 * sqrt_info(2, 2);
  const Scalar _tmp56 = _tmp0 * sqrt_info(0, 1);
  const Scalar _tmp57 = _tmp28 * (1 - lambdas(0, 0));
  const Scalar _tmp58 = _tmp33 * lambdas(0, 1);
  const Scalar _tmp59 = _tmp0 * (-_tmp57 + _tmp58);
  const Scalar _tmp60 = _tmp0 * sqrt_info(1, 1);
  const Scalar _tmp61 = _tmp0 * sqrt_info(2, 1);
  const Scalar _tmp62 = _tmp0 * (_tmp57 - _tmp58);
  const Scalar _tmp63 = _tmp0 * sqrt_info(1, 2);
  const Scalar _tmp64 = _tmp0 * sqrt_info(2, 2);
  const Scalar _tmp65 = _tmp44 * (-_tmp22 * _tmp42 * (_tmp20 - _tmp21) + _tmp25 * _tmp43);
  const Scalar _tmp66 = std::pow(_tmp14, Scalar(2));
  const Scalar _tmp67 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = Scalar(1.0) / (_tmp18);
  const Scalar _tmp70 = _tmp67 / (_tmp66 + _tmp67);
  const Scalar _tmp71 = _tmp70 * (-_tmp66 * _tmp68 + _tmp69 * (-_tmp15 - _tmp16));
  const Scalar _tmp72 = _tmp65 * lambdas(0, 1) + _tmp71 * lambdas(1, 1);
  const Scalar _tmp73 = _tmp65 * lambdas(0, 2) + _tmp71 * lambdas(1, 2);
  const Scalar _tmp74 = _tmp32 * _tmp73 + _tmp34 * _tmp72;
  const Scalar _tmp75 = -_tmp37 * _tmp73 - _tmp38 * _tmp72;
  const Scalar _tmp76 = _tmp0 * _tmp73;
  const Scalar _tmp77 = _tmp50 * _tmp75 + _tmp56 * _tmp74 + _tmp76 * sqrt_info(0, 0);
  const Scalar _tmp78 = _tmp60 * _tmp74 + _tmp63 * _tmp75 + _tmp76 * sqrt_info(1, 0);
  const Scalar _tmp79 = _tmp61 * _tmp74 + _tmp64 * _tmp75 + _tmp76 * sqrt_info(2, 0);
  const Scalar _tmp80 = lambdas(0, 2) - lambdas(1, 2);
  const Scalar _tmp81 = _tmp0 * _tmp80;
  const Scalar _tmp82 = _tmp33 * (lambdas(0, 1) - lambdas(1, 1));
  const Scalar _tmp83 = _tmp28 * (lambdas(0, 0) - lambdas(1, 0));
  const Scalar _tmp84 = -_tmp82 - _tmp83;
  const Scalar _tmp85 = _tmp0 * _tmp84;
  const Scalar _tmp86 = _tmp82 + _tmp83;
  const Scalar _tmp87 = _tmp0 * _tmp86;
  const Scalar _tmp88 = std::pow(_tmp6, Scalar(2));
  const Scalar _tmp89 = std::pow(_tmp10, Scalar(2));
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = Scalar(1.0) / (_tmp10);
  const Scalar _tmp92 = _tmp89 / (_tmp88 + _tmp89);
  const Scalar _tmp93 = _tmp92 * (-_tmp88 * _tmp90 + _tmp91 * (-_tmp7 - _tmp8));
  const Scalar _tmp94 = _tmp70 * (-_tmp14 * _tmp68 * (-_tmp12 + _tmp13) + _tmp17 * _tmp69);
  const Scalar _tmp95 = _tmp93 * lambdas(2, 1) + _tmp94 * lambdas(1, 1);
  const Scalar _tmp96 = _tmp93 * lambdas(2, 2) + _tmp94 * lambdas(1, 2);
  const Scalar _tmp97 = _tmp32 * _tmp96 + _tmp34 * _tmp95;
  const Scalar _tmp98 = -_tmp37 * _tmp96 - _tmp38 * _tmp95;
  const Scalar _tmp99 = _tmp0 * _tmp96;
  const Scalar _tmp100 = _tmp50 * _tmp98 + _tmp56 * _tmp97 + _tmp99 * sqrt_info(0, 0);
  const Scalar _tmp101 = _tmp60 * _tmp97 + _tmp63 * _tmp98 + _tmp99 * sqrt_info(1, 0);
  const Scalar _tmp102 = _tmp61 * _tmp97 + _tmp64 * _tmp98 + _tmp99 * sqrt_info(2, 0);
  const Scalar _tmp103 = _tmp28 * (lambdas(1, 0) - lambdas(2, 0));
  const Scalar _tmp104 = _tmp33 * (lambdas(1, 1) - lambdas(2, 1));
  const Scalar _tmp105 = _tmp0 * (-_tmp103 - _tmp104);
  const Scalar _tmp106 = _tmp0 * (lambdas(1, 2) - lambdas(2, 2));
  const Scalar _tmp107 = _tmp0 * (_tmp103 + _tmp104);
  const Scalar _tmp108 = _tmp92 * (-_tmp6 * _tmp90 * (_tmp4 - _tmp5) + _tmp9 * _tmp91);
  const Scalar _tmp109 = _tmp108 * lambdas(2, 2);
  const Scalar _tmp110 = _tmp108 * lambdas(2, 1);
  const Scalar _tmp111 = -_tmp109 * _tmp37 - _tmp110 * _tmp38;
  const Scalar _tmp112 = _tmp0 * _tmp109;
  const Scalar _tmp113 = _tmp109 * _tmp32 + _tmp110 * _tmp34;
  const Scalar _tmp114 = _tmp111 * _tmp50 + _tmp112 * sqrt_info(0, 0) + _tmp113 * _tmp56;
  const Scalar _tmp115 = _tmp0 * _tmp111;
  const Scalar _tmp116 = _tmp112 * sqrt_info(1, 0) + _tmp113 * _tmp60 + _tmp115 * sqrt_info(1, 2);
  const Scalar _tmp117 = _tmp112 * sqrt_info(2, 0) + _tmp113 * _tmp61 + _tmp115 * sqrt_info(2, 2);
  const Scalar _tmp118 = _tmp33 * lambdas(2, 1);
  const Scalar _tmp119 = _tmp28 * lambdas(2, 0);
  const Scalar _tmp120 = -_tmp118 - _tmp119;
  const Scalar _tmp121 = _tmp118 + _tmp119;

  // Output terms (5)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp35 * sqrt_info(0, 1) + _tmp36 * sqrt_info(0, 0) + _tmp39 * sqrt_info(0, 2);
  _res(1, 0) = _tmp35 * sqrt_info(1, 1) + _tmp36 * sqrt_info(1, 0) + _tmp39 * sqrt_info(1, 2);
  _res(2, 0) = _tmp35 * sqrt_info(2, 1) + _tmp36 * sqrt_info(2, 0) + _tmp39 * sqrt_info(2, 2);

  if (res_D_x0 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x0{res_D_x0};

    _res_D_x0(0, 0) = -_tmp52 * _x0[1];
    _res_D_x0(1, 0) = -_tmp54 * _x0[1];
    _res_D_x0(2, 0) = -_tmp55 * _x0[1];
    _res_D_x0(0, 1) = _tmp52 * _x0[0];
    _res_D_x0(1, 1) = _tmp54 * _x0[0];
    _res_D_x0(2, 1) = _tmp55 * _x0[0];
    _res_D_x0(0, 2) = -_tmp56 * lambdas(0, 2) + _tmp59 * sqrt_info(0, 2);
    _res_D_x0(1, 2) = _tmp59 * sqrt_info(1, 2) - _tmp60 * lambdas(0, 2);
    _res_D_x0(2, 2) = _tmp59 * sqrt_info(2, 2) - _tmp61 * lambdas(0, 2);
    _res_D_x0(0, 3) = -_tmp50 * lambdas(0, 2) + _tmp62 * sqrt_info(0, 1);
    _res_D_x0(1, 3) = _tmp62 * sqrt_info(1, 1) - _tmp63 * lambdas(0, 2);
    _res_D_x0(2, 3) = _tmp62 * sqrt_info(2, 1) - _tmp64 * lambdas(0, 2);
  }

  if (res_D_x1 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x1{res_D_x1};

    _res_D_x1(0, 0) = -_tmp77 * _x1[1];
    _res_D_x1(1, 0) = -_tmp78 * _x1[1];
    _res_D_x1(2, 0) = -_tmp79 * _x1[1];
    _res_D_x1(0, 1) = _tmp77 * _x1[0];
    _res_D_x1(1, 1) = _tmp78 * _x1[0];
    _res_D_x1(2, 1) = _tmp79 * _x1[0];
    _res_D_x1(0, 2) = _tmp50 * _tmp84 + _tmp81 * sqrt_info(0, 1);
    _res_D_x1(1, 2) = _tmp81 * sqrt_info(1, 1) + _tmp85 * sqrt_info(1, 2);
    _res_D_x1(2, 2) = _tmp61 * _tmp80 + _tmp85 * sqrt_info(2, 2);
    _res_D_x1(0, 3) = _tmp50 * _tmp80 + _tmp87 * sqrt_info(0, 1);
    _res_D_x1(1, 3) = _tmp81 * sqrt_info(1, 2) + _tmp87 * sqrt_info(1, 1);
    _res_D_x1(2, 3) = _tmp61 * _tmp86 + _tmp81 * sqrt_info(2, 2);
  }

  if (res_D_x2 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x2{res_D_x2};

    _res_D_x2(0, 0) = -_tmp100 * _x2[1];
    _res_D_x2(1, 0) = -_tmp101 * _x2[1];
    _res_D_x2(2, 0) = -_tmp102 * _x2[1];
    _res_D_x2(0, 1) = _tmp100 * _x2[0];
    _res_D_x2(1, 1) = _tmp101 * _x2[0];
    _res_D_x2(2, 1) = _tmp102 * _x2[0];
    _res_D_x2(0, 2) = _tmp105 * sqrt_info(0, 2) + _tmp106 * sqrt_info(0, 1);
    _res_D_x2(1, 2) = _tmp105 * sqrt_info(1, 2) + _tmp106 * sqrt_info(1, 1);
    _res_D_x2(2, 2) = _tmp105 * sqrt_info(2, 2) + _tmp106 * sqrt_info(2, 1);
    _res_D_x2(0, 3) = _tmp106 * sqrt_info(0, 2) + _tmp107 * sqrt_info(0, 1);
    _res_D_x2(1, 3) = _tmp106 * sqrt_info(1, 2) + _tmp107 * sqrt_info(1, 1);
    _res_D_x2(2, 3) = _tmp106 * sqrt_info(2, 2) + _tmp107 * sqrt_info(2, 1);
  }

  if (res_D_x3 != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 3, 4, Eigen::RowMajor>> _res_D_x3{res_D_x3};

    _res_D_x3(0, 0) = -_tmp114 * _x3[1];
    _res_D_x3(1, 0) = -_tmp116 * _x3[1];
    _res_D_x3(2, 0) = -_tmp117 * _x3[1];
    _res_D_x3(0, 1) = _tmp114 * _x3[0];
    _res_D_x3(1, 1) = _tmp116 * _x3[0];
    _res_D_x3(2, 1) = _tmp117 * _x3[0];
    _res_D_x3(0, 2) = _tmp120 * _tmp50 + _tmp56 * lambdas(2, 2);
    _res_D_x3(1, 2) = _tmp120 * _tmp63 + _tmp60 * lambdas(2, 2);
    _res_D_x3(2, 2) = _tmp120 * _tmp64 + _tmp61 * lambdas(2, 2);
    _res_D_x3(0, 3) = _tmp121 * _tmp56 + _tmp50 * lambdas(2, 2);
    _res_D_x3(1, 3) = _tmp121 * _tmp60 + _tmp63 * lambdas(2, 2);
    _res_D_x3(2, 3) = _tmp121 * _tmp61 + _tmp64 * lambdas(2, 2);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
