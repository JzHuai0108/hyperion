// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/linear_camera_cal.h>
#include <sym/pose3.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline3_pose3_camera_linear_bearing_factor
 *
 * Args:
 *     lambdas: Matrix31
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     b_T_c: Pose3
 *     calibration: LinearCameraCal
 *     l_w: Matrix31
 *     pixel: Matrix21
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Spline3Pose3CameraLinearBearingFactor(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Pose3<Scalar>& b_T_c, const sym::LinearCameraCal<Scalar>& calibration,
    const Eigen::Matrix<Scalar, 3, 1>& l_w, const Eigen::Matrix<Scalar, 2, 1>& pixel,
    const Eigen::Matrix<Scalar, 1, 1>& sqrt_info, const Scalar epsilon) {
  // Total ops: 488

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _b_T_c = b_T_c.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _calibration = calibration.Data();

  // Intermediate terms (116)
  const Scalar _tmp0 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp1 = 1 - epsilon;
  const Scalar _tmp2 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp3 = _x1[3] * _x2[3];
  const Scalar _tmp4 = std::min<Scalar>(_tmp1, std::fabs(_tmp2 - _tmp3));
  const Scalar _tmp5 = 1 - std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp7 =
      2 * std::min<Scalar>(0, (((-_tmp2 + _tmp3) > 0) - ((-_tmp2 + _tmp3) < 0))) + 1;
  const Scalar _tmp8 = std::acos(_tmp4);
  const Scalar _tmp9 = 4 * std::pow(_tmp7, Scalar(2)) * std::pow(_tmp8, Scalar(2)) *
                       std::pow(lambdas(1, 0), Scalar(2)) / _tmp5;
  const Scalar _tmp10 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp11 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp12 =
      std::sqrt(Scalar(std::pow(_tmp0, Scalar(2)) * _tmp9 + std::pow(_tmp10, Scalar(2)) * _tmp9 +
                       _tmp11 + std::pow(_tmp6, Scalar(2)) * _tmp9));
  const Scalar _tmp13 = (Scalar(1) / Scalar(2)) * _tmp12;
  const Scalar _tmp14 =
      _tmp7 * _tmp8 * lambdas(1, 0) * std::sin(_tmp13) / (_tmp12 * std::sqrt(_tmp5));
  const Scalar _tmp15 = _tmp0 * _tmp14;
  const Scalar _tmp16 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp17 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp18 = _x2[3] * _x3[3];
  const Scalar _tmp19 = std::min<Scalar>(_tmp1, std::fabs(_tmp17 - _tmp18));
  const Scalar _tmp20 = 1 - std::pow(_tmp19, Scalar(2));
  const Scalar _tmp21 =
      2 * std::min<Scalar>(0, (((-_tmp17 + _tmp18) > 0) - ((-_tmp17 + _tmp18) < 0))) + 1;
  const Scalar _tmp22 = std::acos(_tmp19);
  const Scalar _tmp23 = 4 * std::pow(_tmp21, Scalar(2)) * std::pow(_tmp22, Scalar(2)) *
                        std::pow(lambdas(2, 0), Scalar(2)) / _tmp20;
  const Scalar _tmp24 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp25 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp26 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp16, Scalar(2)) * _tmp23 +
                                         _tmp23 * std::pow(_tmp24, Scalar(2)) +
                                         _tmp23 * std::pow(_tmp25, Scalar(2))));
  const Scalar _tmp27 = (Scalar(1) / Scalar(2)) * _tmp26;
  const Scalar _tmp28 =
      _tmp21 * _tmp22 * lambdas(2, 0) * std::sin(_tmp27) / (std::sqrt(_tmp20) * _tmp26);
  const Scalar _tmp29 = _tmp16 * _tmp28;
  const Scalar _tmp30 = 4 * _tmp29;
  const Scalar _tmp31 = _tmp14 * _tmp6;
  const Scalar _tmp32 = 4 * _tmp28;
  const Scalar _tmp33 = _tmp24 * _tmp32;
  const Scalar _tmp34 = _tmp10 * _tmp14;
  const Scalar _tmp35 = _tmp25 * _tmp32;
  const Scalar _tmp36 = std::cos(_tmp13);
  const Scalar _tmp37 = std::cos(_tmp27);
  const Scalar _tmp38 = -_tmp15 * _tmp30 - _tmp31 * _tmp33 - _tmp34 * _tmp35 + _tmp36 * _tmp37;
  const Scalar _tmp39 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp40 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp41 = _x0[3] * _x1[3];
  const Scalar _tmp42 =
      2 * std::min<Scalar>(0, (((-_tmp40 + _tmp41) > 0) - ((-_tmp40 + _tmp41) < 0))) + 1;
  const Scalar _tmp43 = std::min<Scalar>(_tmp1, std::fabs(_tmp40 - _tmp41));
  const Scalar _tmp44 = std::acos(_tmp43);
  const Scalar _tmp45 = 1 - std::pow(_tmp43, Scalar(2));
  const Scalar _tmp46 = 4 * std::pow(_tmp42, Scalar(2)) * std::pow(_tmp44, Scalar(2)) *
                        std::pow(lambdas(0, 0), Scalar(2)) / _tmp45;
  const Scalar _tmp47 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp48 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp49 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp39, Scalar(2)) * _tmp46 +
                                         _tmp46 * std::pow(_tmp47, Scalar(2)) +
                                         _tmp46 * std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp50 = (Scalar(1) / Scalar(2)) * _tmp49;
  const Scalar _tmp51 = std::cos(_tmp50);
  const Scalar _tmp52 = 2 * _tmp37;
  const Scalar _tmp53 = _tmp14 * _tmp52;
  const Scalar _tmp54 = 2 * _tmp36;
  const Scalar _tmp55 = _tmp28 * _tmp54;
  const Scalar _tmp56 = _tmp15 * _tmp32;
  const Scalar _tmp57 = _tmp10 * _tmp53 - _tmp24 * _tmp56 + _tmp25 * _tmp55 + _tmp30 * _tmp31;
  const Scalar _tmp58 =
      2 * _tmp42 * _tmp44 * lambdas(0, 0) * std::sin(_tmp50) / (std::sqrt(_tmp45) * _tmp49);
  const Scalar _tmp59 = _tmp48 * _tmp58;
  const Scalar _tmp60 = _tmp24 * _tmp55 + _tmp25 * _tmp56 - _tmp30 * _tmp34 + _tmp53 * _tmp6;
  const Scalar _tmp61 = _tmp47 * _tmp58;
  const Scalar _tmp62 = _tmp15 * _tmp52 + _tmp29 * _tmp54 - _tmp31 * _tmp35 + _tmp33 * _tmp34;
  const Scalar _tmp63 = _tmp39 * _tmp58;
  const Scalar _tmp64 = _tmp38 * _tmp51 - _tmp57 * _tmp59 - _tmp60 * _tmp61 - _tmp62 * _tmp63;
  const Scalar _tmp65 = _tmp38 * _tmp61 + _tmp51 * _tmp60 + _tmp57 * _tmp63 - _tmp59 * _tmp62;
  const Scalar _tmp66 = _tmp38 * _tmp63 + _tmp51 * _tmp62 - _tmp57 * _tmp61 + _tmp59 * _tmp60;
  const Scalar _tmp67 = _tmp38 * _tmp59 + _tmp51 * _tmp57 - _tmp60 * _tmp63 + _tmp61 * _tmp62;
  const Scalar _tmp68 = _tmp64 * _x0[1] + _tmp65 * _x0[3] - _tmp66 * _x0[0] + _tmp67 * _x0[2];
  const Scalar _tmp69 = _tmp64 * _x0[0] - _tmp65 * _x0[2] + _tmp66 * _x0[1] + _tmp67 * _x0[3];
  const Scalar _tmp70 = _tmp64 * _x0[2] + _tmp65 * _x0[0] + _tmp66 * _x0[3] - _tmp67 * _x0[1];
  const Scalar _tmp71 = _tmp64 * _x0[3] - _tmp65 * _x0[1] - _tmp66 * _x0[2] - _tmp67 * _x0[0];
  const Scalar _tmp72 =
      -_b_T_c[0] * _tmp68 + _b_T_c[1] * _tmp69 + _b_T_c[2] * _tmp71 + _b_T_c[3] * _tmp70;
  const Scalar _tmp73 = -2 * std::pow(_tmp72, Scalar(2));
  const Scalar _tmp74 =
      _b_T_c[0] * _tmp71 - _b_T_c[1] * _tmp70 + _b_T_c[2] * _tmp68 + _b_T_c[3] * _tmp69;
  const Scalar _tmp75 = -2 * std::pow(_tmp74, Scalar(2));
  const Scalar _tmp76 = _tmp73 + _tmp75 + 1;
  const Scalar _tmp77 = 2 * _tmp70;
  const Scalar _tmp78 = _tmp68 * _tmp77;
  const Scalar _tmp79 = 2 * _tmp69;
  const Scalar _tmp80 = _tmp71 * _tmp79;
  const Scalar _tmp81 = _tmp68 * _tmp79;
  const Scalar _tmp82 = _tmp71 * _tmp77;
  const Scalar _tmp83 = -2 * std::pow(_tmp69, Scalar(2));
  const Scalar _tmp84 = 1 - 2 * std::pow(_tmp70, Scalar(2));
  const Scalar _tmp85 = _b_T_c[4] * (_tmp81 + _tmp82) + _b_T_c[5] * (_tmp83 + _tmp84) +
                        _b_T_c[6] * (_tmp78 - _tmp80) + _x0[5] +
                        lambdas(0, 0) * (-_x0[5] + _x1[5]) + lambdas(1, 0) * (-_x1[5] + _x2[5]) +
                        lambdas(2, 0) * (-_x2[5] + _x3[5]);
  const Scalar _tmp86 = _tmp70 * _tmp79;
  const Scalar _tmp87 = 2 * _tmp68 * _tmp71;
  const Scalar _tmp88 = -2 * std::pow(_tmp68, Scalar(2));
  const Scalar _tmp89 = _b_T_c[4] * (_tmp86 - _tmp87) + _b_T_c[5] * (_tmp78 + _tmp80) +
                        _b_T_c[6] * (_tmp83 + _tmp88 + 1) + _x0[6] +
                        lambdas(0, 0) * (-_x0[6] + _x1[6]) + lambdas(1, 0) * (-_x1[6] + _x2[6]) +
                        lambdas(2, 0) * (-_x2[6] + _x3[6]);
  const Scalar _tmp90 =
      _b_T_c[0] * _tmp70 + _b_T_c[1] * _tmp71 - _b_T_c[2] * _tmp69 + _b_T_c[3] * _tmp68;
  const Scalar _tmp91 = 2 * _tmp72;
  const Scalar _tmp92 = _tmp90 * _tmp91;
  const Scalar _tmp93 =
      -_b_T_c[0] * _tmp69 - _b_T_c[1] * _tmp68 - _b_T_c[2] * _tmp70 + _b_T_c[3] * _tmp71;
  const Scalar _tmp94 = 2 * _tmp74;
  const Scalar _tmp95 = _tmp93 * _tmp94;
  const Scalar _tmp96 = _tmp92 + _tmp95;
  const Scalar _tmp97 = _tmp90 * _tmp94;
  const Scalar _tmp98 = _tmp91 * _tmp93;
  const Scalar _tmp99 = _tmp97 - _tmp98;
  const Scalar _tmp100 = _b_T_c[4] * (_tmp84 + _tmp88) + _b_T_c[5] * (_tmp81 - _tmp82) +
                         _b_T_c[6] * (_tmp86 + _tmp87) + _x0[4] +
                         lambdas(0, 0) * (-_x0[4] + _x1[4]) + lambdas(1, 0) * (-_x1[4] + _x2[4]) +
                         lambdas(2, 0) * (-_x2[4] + _x3[4]);
  const Scalar _tmp101 = -_tmp100 * _tmp99 - _tmp76 * _tmp85 + _tmp76 * l_w(1, 0) -
                         _tmp89 * _tmp96 + _tmp96 * l_w(2, 0) + _tmp99 * l_w(0, 0);
  const Scalar _tmp102 = (-_calibration[2] + pixel(0, 0)) / _calibration[0];
  const Scalar _tmp103 = _tmp72 * _tmp94;
  const Scalar _tmp104 = 2 * _tmp90 * _tmp93;
  const Scalar _tmp105 = _tmp103 - _tmp104;
  const Scalar _tmp106 = _tmp97 + _tmp98;
  const Scalar _tmp107 = 1 - 2 * std::pow(_tmp90, Scalar(2));
  const Scalar _tmp108 = _tmp107 + _tmp73;
  const Scalar _tmp109 = -_tmp100 * _tmp108 - _tmp105 * _tmp89 + _tmp105 * l_w(2, 0) -
                         _tmp106 * _tmp85 + _tmp106 * l_w(1, 0) + _tmp108 * l_w(0, 0);
  const Scalar _tmp110 = (-_calibration[3] + pixel(1, 0)) / _calibration[1];
  const Scalar _tmp111 = _tmp107 + _tmp75;
  const Scalar _tmp112 = _tmp103 + _tmp104;
  const Scalar _tmp113 = _tmp92 - _tmp95;
  const Scalar _tmp114 = -_tmp100 * _tmp112 - _tmp111 * _tmp89 + _tmp111 * l_w(2, 0) +
                         _tmp112 * l_w(0, 0) - _tmp113 * _tmp85 + _tmp113 * l_w(1, 0);
  const Scalar _tmp115 = _tmp101 * _tmp110 + _tmp102 * _tmp109 + _tmp114;

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) =
      sqrt_info(0, 0) *
      std::atan2(
          std::sqrt(Scalar(epsilon + std::pow(Scalar(-_tmp101 + _tmp110 * _tmp114), Scalar(2)) +
                           std::pow(Scalar(_tmp101 * _tmp102 - _tmp109 * _tmp110), Scalar(2)) +
                           std::pow(Scalar(-_tmp102 * _tmp114 + _tmp109), Scalar(2)))),
          _tmp115 + epsilon * ((((_tmp115) > 0) - ((_tmp115) < 0)) + Scalar(0.5)));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
