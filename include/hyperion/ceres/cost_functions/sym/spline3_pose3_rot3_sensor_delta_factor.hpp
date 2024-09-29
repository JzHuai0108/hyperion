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
 * Symbolic function: spline3_pose3_rot3_sensor_delta_factor
 *
 * Args:
 *     lambdas: Matrix31
 *     x0: Pose3
 *     x1: Pose3
 *     x2: Pose3
 *     x3: Pose3
 *     x_T_y: Rot3
 *     y: Pose3
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline3Pose3Rot3SensorDeltaFactor(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas, const sym::Pose3<Scalar>& x0,
    const sym::Pose3<Scalar>& x1, const sym::Pose3<Scalar>& x2, const sym::Pose3<Scalar>& x3,
    const sym::Rot3<Scalar>& x_T_y, const sym::Pose3<Scalar>& y,
    const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon) {
  // Total ops: 385

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_y = x_T_y.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (82)
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
  const Scalar _tmp15 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp16 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp17 = _x2[3] * _x3[3];
  const Scalar _tmp18 = std::min<Scalar>(_tmp1, std::fabs(_tmp16 - _tmp17));
  const Scalar _tmp19 = 1 - std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 =
      2 * std::min<Scalar>(0, (((-_tmp16 + _tmp17) > 0) - ((-_tmp16 + _tmp17) < 0))) + 1;
  const Scalar _tmp21 = std::acos(_tmp18);
  const Scalar _tmp22 = 4 * std::pow(_tmp20, Scalar(2)) * std::pow(_tmp21, Scalar(2)) *
                        std::pow(lambdas(2, 0), Scalar(2)) / _tmp19;
  const Scalar _tmp23 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp24 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp25 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp15, Scalar(2)) * _tmp22 +
                                         _tmp22 * std::pow(_tmp23, Scalar(2)) +
                                         _tmp22 * std::pow(_tmp24, Scalar(2))));
  const Scalar _tmp26 = (Scalar(1) / Scalar(2)) * _tmp25;
  const Scalar _tmp27 =
      _tmp20 * _tmp21 * lambdas(2, 0) * std::sin(_tmp26) / (std::sqrt(_tmp19) * _tmp25);
  const Scalar _tmp28 = _tmp15 * _tmp27;
  const Scalar _tmp29 = 4 * _tmp28;
  const Scalar _tmp30 = _tmp14 * _tmp29;
  const Scalar _tmp31 = 4 * _tmp27;
  const Scalar _tmp32 = _tmp23 * _tmp31;
  const Scalar _tmp33 = _tmp14 * _tmp32;
  const Scalar _tmp34 = _tmp10 * _tmp14;
  const Scalar _tmp35 = _tmp24 * _tmp31;
  const Scalar _tmp36 = std::cos(_tmp13);
  const Scalar _tmp37 = std::cos(_tmp26);
  const Scalar _tmp38 = -_tmp0 * _tmp30 - _tmp33 * _tmp6 - _tmp34 * _tmp35 + _tmp36 * _tmp37;
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
  const Scalar _tmp53 = 2 * _tmp36;
  const Scalar _tmp54 = _tmp27 * _tmp53;
  const Scalar _tmp55 = -_tmp0 * _tmp33 + _tmp24 * _tmp54 + _tmp30 * _tmp6 + _tmp34 * _tmp52;
  const Scalar _tmp56 =
      2 * _tmp42 * _tmp44 * lambdas(0, 0) * std::sin(_tmp50) / (std::sqrt(_tmp45) * _tmp49);
  const Scalar _tmp57 = _tmp48 * _tmp56;
  const Scalar _tmp58 = _tmp14 * _tmp52;
  const Scalar _tmp59 = _tmp14 * _tmp35;
  const Scalar _tmp60 = _tmp0 * _tmp59 + _tmp23 * _tmp54 - _tmp29 * _tmp34 + _tmp58 * _tmp6;
  const Scalar _tmp61 = _tmp47 * _tmp56;
  const Scalar _tmp62 = _tmp0 * _tmp58 + _tmp28 * _tmp53 + _tmp32 * _tmp34 - _tmp59 * _tmp6;
  const Scalar _tmp63 = _tmp39 * _tmp56;
  const Scalar _tmp64 = _tmp38 * _tmp51 - _tmp55 * _tmp57 - _tmp60 * _tmp61 - _tmp62 * _tmp63;
  const Scalar _tmp65 = _tmp38 * _tmp61 + _tmp51 * _tmp60 + _tmp55 * _tmp63 - _tmp57 * _tmp62;
  const Scalar _tmp66 = _tmp38 * _tmp63 + _tmp51 * _tmp62 - _tmp55 * _tmp61 + _tmp57 * _tmp60;
  const Scalar _tmp67 = _tmp38 * _tmp57 + _tmp51 * _tmp55 - _tmp60 * _tmp63 + _tmp61 * _tmp62;
  const Scalar _tmp68 = _tmp64 * _x0[3] - _tmp65 * _x0[1] - _tmp66 * _x0[2] - _tmp67 * _x0[0];
  const Scalar _tmp69 = _tmp64 * _x0[2] + _tmp65 * _x0[0] + _tmp66 * _x0[3] - _tmp67 * _x0[1];
  const Scalar _tmp70 = _tmp64 * _x0[0] - _tmp65 * _x0[2] + _tmp66 * _x0[1] + _tmp67 * _x0[3];
  const Scalar _tmp71 = _tmp64 * _x0[1] + _tmp65 * _x0[3] - _tmp66 * _x0[0] + _tmp67 * _x0[2];
  const Scalar _tmp72 = _tmp68 * _y[3] + _tmp69 * _y[2] + _tmp70 * _y[0] + _tmp71 * _y[1];
  const Scalar _tmp73 = _tmp68 * _y[1] - _tmp69 * _y[0] + _tmp70 * _y[2] - _tmp71 * _y[3];
  const Scalar _tmp74 = _tmp68 * _y[0] + _tmp69 * _y[1] - _tmp70 * _y[3] - _tmp71 * _y[2];
  const Scalar _tmp75 = _tmp68 * _y[2] - _tmp69 * _y[3] - _tmp70 * _y[1] + _tmp71 * _y[0];
  const Scalar _tmp76 =
      _tmp72 * _x_T_y[3] + _tmp73 * _x_T_y[1] + _tmp74 * _x_T_y[0] + _tmp75 * _x_T_y[2];
  const Scalar _tmp77 = std::min<Scalar>(_tmp1, std::fabs(_tmp76));
  const Scalar _tmp78 = 2 * (2 * std::min<Scalar>(0, (((_tmp76) > 0) - ((_tmp76) < 0))) + 1) *
                        std::acos(_tmp77) / std::sqrt(Scalar(1 - std::pow(_tmp77, Scalar(2))));
  const Scalar _tmp79 =
      _tmp78 * (-_tmp72 * _x_T_y[2] - _tmp73 * _x_T_y[0] + _tmp74 * _x_T_y[1] + _tmp75 * _x_T_y[3]);
  const Scalar _tmp80 =
      _tmp78 * (-_tmp72 * _x_T_y[0] + _tmp73 * _x_T_y[2] + _tmp74 * _x_T_y[3] - _tmp75 * _x_T_y[1]);
  const Scalar _tmp81 =
      _tmp78 * (-_tmp72 * _x_T_y[1] + _tmp73 * _x_T_y[3] - _tmp74 * _x_T_y[2] + _tmp75 * _x_T_y[0]);

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp79 * sqrt_info(0, 2) + _tmp80 * sqrt_info(0, 0) + _tmp81 * sqrt_info(0, 1);
  _res(1, 0) = _tmp79 * sqrt_info(1, 2) + _tmp80 * sqrt_info(1, 0) + _tmp81 * sqrt_info(1, 1);
  _res(2, 0) = _tmp79 * sqrt_info(2, 2) + _tmp80 * sqrt_info(2, 0) + _tmp81 * sqrt_info(2, 1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
