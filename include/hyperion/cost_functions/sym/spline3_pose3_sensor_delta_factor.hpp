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
 * Symbolic function: spline3_pose3_sensor_delta_factor
 *
 * Args:
 *     lambdas: Matrix31
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     x_T_y: Pose3
 *     y: Pose3
 *     sqrt_info: Matrix66
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix61
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Spline3Pose3SensorDeltaFactor(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Pose3<Scalar>& x_T_y, const sym::Pose3<Scalar>& y,
    const Eigen::Matrix<Scalar, 6, 6>& sqrt_info, const Scalar epsilon) {
  // Total ops: 530

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x_T_y = x_T_y.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (110)
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
  const Scalar _tmp31 = 4 * _tmp28;
  const Scalar _tmp32 = _tmp14 * _tmp31;
  const Scalar _tmp33 = _tmp24 * _tmp32;
  const Scalar _tmp34 = _tmp25 * _tmp32;
  const Scalar _tmp35 = std::cos(_tmp13);
  const Scalar _tmp36 = std::cos(_tmp27);
  const Scalar _tmp37 = -_tmp10 * _tmp34 - _tmp15 * _tmp30 - _tmp33 * _tmp6 + _tmp35 * _tmp36;
  const Scalar _tmp38 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp39 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp40 = _x0[3] * _x1[3];
  const Scalar _tmp41 =
      2 * std::min<Scalar>(0, (((-_tmp39 + _tmp40) > 0) - ((-_tmp39 + _tmp40) < 0))) + 1;
  const Scalar _tmp42 = std::min<Scalar>(_tmp1, std::fabs(_tmp39 - _tmp40));
  const Scalar _tmp43 = std::acos(_tmp42);
  const Scalar _tmp44 = 1 - std::pow(_tmp42, Scalar(2));
  const Scalar _tmp45 = 4 * std::pow(_tmp41, Scalar(2)) * std::pow(_tmp43, Scalar(2)) *
                        std::pow(lambdas(0, 0), Scalar(2)) / _tmp44;
  const Scalar _tmp46 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp47 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp48 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp38, Scalar(2)) * _tmp45 +
                                         _tmp45 * std::pow(_tmp46, Scalar(2)) +
                                         _tmp45 * std::pow(_tmp47, Scalar(2))));
  const Scalar _tmp49 = (Scalar(1) / Scalar(2)) * _tmp48;
  const Scalar _tmp50 = std::cos(_tmp49);
  const Scalar _tmp51 = _tmp14 * _tmp30;
  const Scalar _tmp52 = 2 * _tmp36;
  const Scalar _tmp53 = _tmp14 * _tmp52;
  const Scalar _tmp54 = 2 * _tmp35;
  const Scalar _tmp55 = _tmp28 * _tmp54;
  const Scalar _tmp56 = _tmp15 * _tmp31;
  const Scalar _tmp57 = _tmp10 * _tmp53 - _tmp24 * _tmp56 + _tmp25 * _tmp55 + _tmp51 * _tmp6;
  const Scalar _tmp58 =
      2 * _tmp41 * _tmp43 * lambdas(0, 0) * std::sin(_tmp49) / (std::sqrt(_tmp44) * _tmp48);
  const Scalar _tmp59 = _tmp57 * _tmp58;
  const Scalar _tmp60 = -_tmp10 * _tmp51 + _tmp24 * _tmp55 + _tmp25 * _tmp56 + _tmp53 * _tmp6;
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = _tmp10 * _tmp33 + _tmp15 * _tmp52 + _tmp29 * _tmp54 - _tmp34 * _tmp6;
  const Scalar _tmp63 = _tmp58 * _tmp62;
  const Scalar _tmp64 = _tmp37 * _tmp50 - _tmp38 * _tmp63 - _tmp46 * _tmp61 - _tmp47 * _tmp59;
  const Scalar _tmp65 = _tmp37 * _tmp58;
  const Scalar _tmp66 = _tmp38 * _tmp59 + _tmp46 * _tmp65 - _tmp47 * _tmp63 + _tmp50 * _tmp60;
  const Scalar _tmp67 = _tmp38 * _tmp65 - _tmp46 * _tmp59 + _tmp47 * _tmp61 + _tmp50 * _tmp62;
  const Scalar _tmp68 = -_tmp38 * _tmp61 + _tmp46 * _tmp63 + _tmp47 * _tmp65 + _tmp50 * _tmp57;
  const Scalar _tmp69 = _tmp64 * _x0[2] + _tmp66 * _x0[0] + _tmp67 * _x0[3] - _tmp68 * _x0[1];
  const Scalar _tmp70 = -2 * std::pow(_tmp69, Scalar(2));
  const Scalar _tmp71 = _tmp64 * _x0[1] + _tmp66 * _x0[3] - _tmp67 * _x0[0] + _tmp68 * _x0[2];
  const Scalar _tmp72 = 1 - 2 * std::pow(_tmp71, Scalar(2));
  const Scalar _tmp73 = _tmp70 + _tmp72;
  const Scalar _tmp74 = _tmp64 * _x0[0] - _tmp66 * _x0[2] + _tmp67 * _x0[1] + _tmp68 * _x0[3];
  const Scalar _tmp75 = 2 * _tmp71;
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp64 * _x0[3] - _tmp66 * _x0[1] - _tmp67 * _x0[2] - _tmp68 * _x0[0];
  const Scalar _tmp78 = 2 * _tmp69 * _tmp77;
  const Scalar _tmp79 = _tmp76 + _tmp78;
  const Scalar _tmp80 = _x0[5] + lambdas(0, 0) * (-_x0[5] + _x1[5]) +
                        lambdas(1, 0) * (-_x1[5] + _x2[5]) + lambdas(2, 0) * (-_x2[5] + _x3[5]);
  const Scalar _tmp81 = _x0[4] + lambdas(0, 0) * (-_x0[4] + _x1[4]) +
                        lambdas(1, 0) * (-_x1[4] + _x2[4]) + lambdas(2, 0) * (-_x2[4] + _x3[4]);
  const Scalar _tmp82 = 2 * _tmp74;
  const Scalar _tmp83 = _tmp69 * _tmp82;
  const Scalar _tmp84 = _tmp75 * _tmp77;
  const Scalar _tmp85 = _tmp83 - _tmp84;
  const Scalar _tmp86 = _x0[6] + lambdas(0, 0) * (-_x0[6] + _x1[6]) +
                        lambdas(1, 0) * (-_x1[6] + _x2[6]) + lambdas(2, 0) * (-_x2[6] + _x3[6]);
  const Scalar _tmp87 = -_tmp73 * _tmp81 + _tmp73 * _y[4] - _tmp79 * _tmp80 + _tmp79 * _y[5] -
                        _tmp85 * _tmp86 + _tmp85 * _y[6] - _x_T_y[4];
  const Scalar _tmp88 = -2 * std::pow(_tmp74, Scalar(2));
  const Scalar _tmp89 = _tmp70 + _tmp88 + 1;
  const Scalar _tmp90 = _tmp76 - _tmp78;
  const Scalar _tmp91 = _tmp69 * _tmp75;
  const Scalar _tmp92 = _tmp77 * _tmp82;
  const Scalar _tmp93 = _tmp91 + _tmp92;
  const Scalar _tmp94 = -_tmp80 * _tmp89 - _tmp81 * _tmp90 - _tmp86 * _tmp93 + _tmp89 * _y[5] +
                        _tmp90 * _y[4] + _tmp93 * _y[6] - _x_T_y[5];
  const Scalar _tmp95 = _tmp69 * _y[1] - _tmp71 * _y[2] - _tmp74 * _y[3] + _tmp77 * _y[0];
  const Scalar _tmp96 = -_tmp69 * _y[0] - _tmp71 * _y[3] + _tmp74 * _y[2] + _tmp77 * _y[1];
  const Scalar _tmp97 = -_tmp69 * _y[3] + _tmp71 * _y[0] - _tmp74 * _y[1] + _tmp77 * _y[2];
  const Scalar _tmp98 = _tmp69 * _y[2] + _tmp71 * _y[1] + _tmp74 * _y[0] + _tmp77 * _y[3];
  const Scalar _tmp99 = -_tmp95 * _x_T_y[0] - _tmp96 * _x_T_y[1] - _tmp97 * _x_T_y[2];
  const Scalar _tmp100 = _tmp98 * _x_T_y[3];
  const Scalar _tmp101 = std::min<Scalar>(_tmp1, std::fabs(_tmp100 - _tmp99));
  const Scalar _tmp102 =
      2 * (2 * std::min<Scalar>(0, (((_tmp100 - _tmp99) > 0) - ((_tmp100 - _tmp99) < 0))) + 1) *
      std::acos(_tmp101) / std::sqrt(Scalar(1 - std::pow(_tmp101, Scalar(2))));
  const Scalar _tmp103 =
      _tmp102 * (_tmp95 * _x_T_y[3] + _tmp96 * _x_T_y[2] - _tmp97 * _x_T_y[1] - _tmp98 * _x_T_y[0]);
  const Scalar _tmp104 =
      _tmp102 * (_tmp95 * _x_T_y[1] - _tmp96 * _x_T_y[0] + _tmp97 * _x_T_y[3] - _tmp98 * _x_T_y[2]);
  const Scalar _tmp105 = _tmp72 + _tmp88;
  const Scalar _tmp106 = _tmp91 - _tmp92;
  const Scalar _tmp107 = _tmp83 + _tmp84;
  const Scalar _tmp108 = -_tmp105 * _tmp86 + _tmp105 * _y[6] - _tmp106 * _tmp80 + _tmp106 * _y[5] -
                         _tmp107 * _tmp81 + _tmp107 * _y[4] - _x_T_y[6];
  const Scalar _tmp109 = _tmp102 * (-_tmp95 * _x_T_y[2] + _tmp96 * _x_T_y[3] + _tmp97 * _x_T_y[0] -
                                    _tmp98 * _x_T_y[1]);

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp103 * sqrt_info(0, 0) + _tmp104 * sqrt_info(0, 2) + _tmp108 * sqrt_info(0, 5) +
               _tmp109 * sqrt_info(0, 1) + _tmp87 * sqrt_info(0, 3) + _tmp94 * sqrt_info(0, 4);
  _res(1, 0) = _tmp103 * sqrt_info(1, 0) + _tmp104 * sqrt_info(1, 2) + _tmp108 * sqrt_info(1, 5) +
               _tmp109 * sqrt_info(1, 1) + _tmp87 * sqrt_info(1, 3) + _tmp94 * sqrt_info(1, 4);
  _res(2, 0) = _tmp103 * sqrt_info(2, 0) + _tmp104 * sqrt_info(2, 2) + _tmp108 * sqrt_info(2, 5) +
               _tmp109 * sqrt_info(2, 1) + _tmp87 * sqrt_info(2, 3) + _tmp94 * sqrt_info(2, 4);
  _res(3, 0) = _tmp103 * sqrt_info(3, 0) + _tmp104 * sqrt_info(3, 2) + _tmp108 * sqrt_info(3, 5) +
               _tmp109 * sqrt_info(3, 1) + _tmp87 * sqrt_info(3, 3) + _tmp94 * sqrt_info(3, 4);
  _res(4, 0) = _tmp103 * sqrt_info(4, 0) + _tmp104 * sqrt_info(4, 2) + _tmp108 * sqrt_info(4, 5) +
               _tmp109 * sqrt_info(4, 1) + _tmp87 * sqrt_info(4, 3) + _tmp94 * sqrt_info(4, 4);
  _res(5, 0) = _tmp103 * sqrt_info(5, 0) + _tmp104 * sqrt_info(5, 2) + _tmp108 * sqrt_info(5, 5) +
               _tmp109 * sqrt_info(5, 1) + _tmp87 * sqrt_info(5, 3) + _tmp94 * sqrt_info(5, 4);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
