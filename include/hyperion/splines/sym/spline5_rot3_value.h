// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline5_rot3_value
 *
 * Args:
 *     lambdas: Matrix51
 *     x0: Rot3
 *     x1: Rot3
 *     x2: Rot3
 *     x3: Rot3
 *     x4: Rot3
 *     x5: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Rot3
 */
template <typename Scalar>
sym::Rot3<Scalar> Spline5Rot3Value(const Eigen::Matrix<Scalar, 5, 1>& lambdas,
                                   const sym::Rot3<Scalar>& x0, const sym::Rot3<Scalar>& x1,
                                   const sym::Rot3<Scalar>& x2, const sym::Rot3<Scalar>& x3,
                                   const sym::Rot3<Scalar>& x4, const sym::Rot3<Scalar>& x5,
                                   const Scalar epsilon) {
  // Total ops: 493

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x4 = x4.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x5 = x5.Data();

  // Intermediate terms (111)
  const Scalar _tmp0 = -_x4[0] * _x5[3] - _x4[1] * _x5[2] + _x4[2] * _x5[1] + _x4[3] * _x5[0];
  const Scalar _tmp1 = -_x4[0] * _x5[0] - _x4[1] * _x5[1] - _x4[2] * _x5[2];
  const Scalar _tmp2 = _x4[3] * _x5[3];
  const Scalar _tmp3 = 1 - epsilon;
  const Scalar _tmp4 = std::min<Scalar>(_tmp3, std::fabs(_tmp1 - _tmp2));
  const Scalar _tmp5 = std::acos(_tmp4);
  const Scalar _tmp6 =
      2 * std::min<Scalar>(0, (((-_tmp1 + _tmp2) > 0) - ((-_tmp1 + _tmp2) < 0))) + 1;
  const Scalar _tmp7 = 1 - std::pow(_tmp4, Scalar(2));
  const Scalar _tmp8 = 4 * std::pow(_tmp5, Scalar(2)) * std::pow(_tmp6, Scalar(2)) *
                       std::pow(lambdas(4, 0), Scalar(2)) / _tmp7;
  const Scalar _tmp9 = _x4[0] * _x5[2] - _x4[1] * _x5[3] - _x4[2] * _x5[0] + _x4[3] * _x5[1];
  const Scalar _tmp10 = -_x4[0] * _x5[1] + _x4[1] * _x5[0] - _x4[2] * _x5[3] + _x4[3] * _x5[2];
  const Scalar _tmp11 = std::pow(epsilon, Scalar(2));
  const Scalar _tmp12 =
      std::sqrt(Scalar(std::pow(_tmp0, Scalar(2)) * _tmp8 + std::pow(_tmp10, Scalar(2)) * _tmp8 +
                       _tmp11 + _tmp8 * std::pow(_tmp9, Scalar(2))));
  const Scalar _tmp13 = (Scalar(1) / Scalar(2)) * _tmp12;
  const Scalar _tmp14 =
      _tmp5 * _tmp6 * lambdas(4, 0) * std::sin(_tmp13) / (_tmp12 * std::sqrt(_tmp7));
  const Scalar _tmp15 = 4 * _tmp14;
  const Scalar _tmp16 = _tmp0 * _tmp15;
  const Scalar _tmp17 = -_x3[0] * _x4[3] - _x3[1] * _x4[2] + _x3[2] * _x4[1] + _x3[3] * _x4[0];
  const Scalar _tmp18 = -_x3[0] * _x4[0] - _x3[1] * _x4[1] - _x3[2] * _x4[2];
  const Scalar _tmp19 = _x3[3] * _x4[3];
  const Scalar _tmp20 = std::min<Scalar>(_tmp3, std::fabs(_tmp18 - _tmp19));
  const Scalar _tmp21 = std::acos(_tmp20);
  const Scalar _tmp22 =
      2 * std::min<Scalar>(0, (((-_tmp18 + _tmp19) > 0) - ((-_tmp18 + _tmp19) < 0))) + 1;
  const Scalar _tmp23 = 1 - std::pow(_tmp20, Scalar(2));
  const Scalar _tmp24 = 4 * std::pow(_tmp21, Scalar(2)) * std::pow(_tmp22, Scalar(2)) *
                        std::pow(lambdas(3, 0), Scalar(2)) / _tmp23;
  const Scalar _tmp25 = -_x3[0] * _x4[1] + _x3[1] * _x4[0] - _x3[2] * _x4[3] + _x3[3] * _x4[2];
  const Scalar _tmp26 = _x3[0] * _x4[2] - _x3[1] * _x4[3] - _x3[2] * _x4[0] + _x3[3] * _x4[1];
  const Scalar _tmp27 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp17, Scalar(2)) * _tmp24 +
                                         _tmp24 * std::pow(_tmp25, Scalar(2)) +
                                         _tmp24 * std::pow(_tmp26, Scalar(2))));
  const Scalar _tmp28 = (Scalar(1) / Scalar(2)) * _tmp27;
  const Scalar _tmp29 =
      _tmp21 * _tmp22 * lambdas(3, 0) * std::sin(_tmp28) / (std::sqrt(_tmp23) * _tmp27);
  const Scalar _tmp30 = _tmp17 * _tmp29;
  const Scalar _tmp31 = _tmp25 * _tmp29;
  const Scalar _tmp32 = _tmp10 * _tmp15;
  const Scalar _tmp33 = _tmp26 * _tmp29;
  const Scalar _tmp34 = _tmp14 * _tmp9;
  const Scalar _tmp35 = 4 * _tmp34;
  const Scalar _tmp36 = std::cos(_tmp13);
  const Scalar _tmp37 = std::cos(_tmp28);
  const Scalar _tmp38 = -_tmp16 * _tmp30 - _tmp31 * _tmp32 - _tmp33 * _tmp35 + _tmp36 * _tmp37;
  const Scalar _tmp39 = _x2[0] * _x3[2] - _x2[1] * _x3[3] - _x2[2] * _x3[0] + _x2[3] * _x3[1];
  const Scalar _tmp40 = -_x2[0] * _x3[0] - _x2[1] * _x3[1] - _x2[2] * _x3[2];
  const Scalar _tmp41 = _x2[3] * _x3[3];
  const Scalar _tmp42 = std::min<Scalar>(_tmp3, std::fabs(_tmp40 - _tmp41));
  const Scalar _tmp43 = std::acos(_tmp42);
  const Scalar _tmp44 =
      2 * std::min<Scalar>(0, (((-_tmp40 + _tmp41) > 0) - ((-_tmp40 + _tmp41) < 0))) + 1;
  const Scalar _tmp45 = 1 - std::pow(_tmp42, Scalar(2));
  const Scalar _tmp46 = 4 * std::pow(_tmp43, Scalar(2)) * std::pow(_tmp44, Scalar(2)) *
                        std::pow(lambdas(2, 0), Scalar(2)) / _tmp45;
  const Scalar _tmp47 = -_x2[0] * _x3[1] + _x2[1] * _x3[0] - _x2[2] * _x3[3] + _x2[3] * _x3[2];
  const Scalar _tmp48 = -_x2[0] * _x3[3] - _x2[1] * _x3[2] + _x2[2] * _x3[1] + _x2[3] * _x3[0];
  const Scalar _tmp49 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp39, Scalar(2)) * _tmp46 +
                                         _tmp46 * std::pow(_tmp47, Scalar(2)) +
                                         _tmp46 * std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp50 = (Scalar(1) / Scalar(2)) * _tmp49;
  const Scalar _tmp51 = std::cos(_tmp50);
  const Scalar _tmp52 = 2 * _tmp37;
  const Scalar _tmp53 = _tmp14 * _tmp52;
  const Scalar _tmp54 = 2 * _tmp36;
  const Scalar _tmp55 = _tmp29 * _tmp54;
  const Scalar _tmp56 = _tmp10 * _tmp53 - _tmp16 * _tmp33 + _tmp25 * _tmp55 + _tmp30 * _tmp35;
  const Scalar _tmp57 =
      2 * _tmp43 * _tmp44 * lambdas(2, 0) * std::sin(_tmp50) / (std::sqrt(_tmp45) * _tmp49);
  const Scalar _tmp58 = _tmp47 * _tmp57;
  const Scalar _tmp59 = _tmp16 * _tmp31 - _tmp30 * _tmp32 + _tmp33 * _tmp54 + _tmp34 * _tmp52;
  const Scalar _tmp60 = _tmp39 * _tmp57;
  const Scalar _tmp61 = _tmp0 * _tmp53 + _tmp17 * _tmp55 - _tmp31 * _tmp35 + _tmp32 * _tmp33;
  const Scalar _tmp62 = _tmp48 * _tmp57;
  const Scalar _tmp63 = _tmp38 * _tmp51 - _tmp56 * _tmp58 - _tmp59 * _tmp60 - _tmp61 * _tmp62;
  const Scalar _tmp64 = _x1[0] * _x2[2] - _x1[1] * _x2[3] - _x1[2] * _x2[0] + _x1[3] * _x2[1];
  const Scalar _tmp65 = -_x1[0] * _x2[0] - _x1[1] * _x2[1] - _x1[2] * _x2[2];
  const Scalar _tmp66 = _x1[3] * _x2[3];
  const Scalar _tmp67 = std::min<Scalar>(_tmp3, std::fabs(_tmp65 - _tmp66));
  const Scalar _tmp68 = 1 - std::pow(_tmp67, Scalar(2));
  const Scalar _tmp69 = std::acos(_tmp67);
  const Scalar _tmp70 =
      2 * std::min<Scalar>(0, (((-_tmp65 + _tmp66) > 0) - ((-_tmp65 + _tmp66) < 0))) + 1;
  const Scalar _tmp71 = 4 * std::pow(_tmp69, Scalar(2)) * std::pow(_tmp70, Scalar(2)) *
                        std::pow(lambdas(1, 0), Scalar(2)) / _tmp68;
  const Scalar _tmp72 = -_x1[0] * _x2[3] - _x1[1] * _x2[2] + _x1[2] * _x2[1] + _x1[3] * _x2[0];
  const Scalar _tmp73 = -_x1[0] * _x2[1] + _x1[1] * _x2[0] - _x1[2] * _x2[3] + _x1[3] * _x2[2];
  const Scalar _tmp74 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp64, Scalar(2)) * _tmp71 +
                                         _tmp71 * std::pow(_tmp72, Scalar(2)) +
                                         _tmp71 * std::pow(_tmp73, Scalar(2))));
  const Scalar _tmp75 = (Scalar(1) / Scalar(2)) * _tmp74;
  const Scalar _tmp76 =
      2 * _tmp69 * _tmp70 * lambdas(1, 0) * std::sin(_tmp75) / (std::sqrt(_tmp68) * _tmp74);
  const Scalar _tmp77 = _tmp64 * _tmp76;
  const Scalar _tmp78 = _tmp38 * _tmp60 + _tmp51 * _tmp59 - _tmp56 * _tmp62 + _tmp58 * _tmp61;
  const Scalar _tmp79 = std::cos(_tmp75);
  const Scalar _tmp80 = _tmp38 * _tmp62 + _tmp51 * _tmp61 + _tmp56 * _tmp60 - _tmp58 * _tmp59;
  const Scalar _tmp81 = _tmp73 * _tmp76;
  const Scalar _tmp82 = _tmp38 * _tmp58 + _tmp51 * _tmp56 + _tmp59 * _tmp62 - _tmp60 * _tmp61;
  const Scalar _tmp83 = _tmp72 * _tmp76;
  const Scalar _tmp84 = _tmp63 * _tmp77 + _tmp78 * _tmp79 + _tmp80 * _tmp81 - _tmp82 * _tmp83;
  const Scalar _tmp85 = -_x0[0] * _x1[1] + _x0[1] * _x1[0] - _x0[2] * _x1[3] + _x0[3] * _x1[2];
  const Scalar _tmp86 = -_x0[0] * _x1[0] - _x0[1] * _x1[1] - _x0[2] * _x1[2];
  const Scalar _tmp87 = _x0[3] * _x1[3];
  const Scalar _tmp88 = std::min<Scalar>(_tmp3, std::fabs(_tmp86 - _tmp87));
  const Scalar _tmp89 = 1 - std::pow(_tmp88, Scalar(2));
  const Scalar _tmp90 = std::acos(_tmp88);
  const Scalar _tmp91 =
      2 * std::min<Scalar>(0, (((-_tmp86 + _tmp87) > 0) - ((-_tmp86 + _tmp87) < 0))) + 1;
  const Scalar _tmp92 = -_x0[0] * _x1[3] - _x0[1] * _x1[2] + _x0[2] * _x1[1] + _x0[3] * _x1[0];
  const Scalar _tmp93 = 4 * std::pow(_tmp90, Scalar(2)) * std::pow(_tmp91, Scalar(2)) *
                        std::pow(lambdas(0, 0), Scalar(2)) / _tmp89;
  const Scalar _tmp94 = _x0[0] * _x1[2] - _x0[1] * _x1[3] - _x0[2] * _x1[0] + _x0[3] * _x1[1];
  const Scalar _tmp95 = std::sqrt(Scalar(_tmp11 + std::pow(_tmp85, Scalar(2)) * _tmp93 +
                                         std::pow(_tmp92, Scalar(2)) * _tmp93 +
                                         _tmp93 * std::pow(_tmp94, Scalar(2))));
  const Scalar _tmp96 = (Scalar(1) / Scalar(2)) * _tmp95;
  const Scalar _tmp97 =
      2 * _tmp90 * _tmp91 * lambdas(0, 0) * std::sin(_tmp96) / (std::sqrt(_tmp89) * _tmp95);
  const Scalar _tmp98 = _tmp85 * _tmp97;
  const Scalar _tmp99 = _tmp63 * _tmp81 - _tmp77 * _tmp80 + _tmp78 * _tmp83 + _tmp79 * _tmp82;
  const Scalar _tmp100 = _tmp94 * _tmp97;
  const Scalar _tmp101 = _tmp63 * _tmp79 - _tmp77 * _tmp78 - _tmp80 * _tmp83 - _tmp81 * _tmp82;
  const Scalar _tmp102 = _tmp92 * _tmp97;
  const Scalar _tmp103 = _tmp63 * _tmp83 + _tmp77 * _tmp82 - _tmp78 * _tmp81 + _tmp79 * _tmp80;
  const Scalar _tmp104 = std::cos(_tmp96);
  const Scalar _tmp105 = _tmp100 * _tmp99 + _tmp101 * _tmp102 + _tmp103 * _tmp104 - _tmp84 * _tmp98;
  const Scalar _tmp106 = _tmp101 * _tmp97;
  const Scalar _tmp107 = _tmp103 * _tmp97;
  const Scalar _tmp108 = -_tmp102 * _tmp99 + _tmp104 * _tmp84 + _tmp106 * _tmp94 + _tmp107 * _tmp85;
  const Scalar _tmp109 = -_tmp100 * _tmp84 + _tmp101 * _tmp104 - _tmp107 * _tmp92 - _tmp98 * _tmp99;
  const Scalar _tmp110 = _tmp102 * _tmp84 + _tmp104 * _tmp99 + _tmp106 * _tmp85 - _tmp107 * _tmp94;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res[0] = _tmp105 * _x0[3] - _tmp108 * _x0[2] + _tmp109 * _x0[0] + _tmp110 * _x0[1];
  _res[1] = _tmp105 * _x0[2] + _tmp108 * _x0[3] + _tmp109 * _x0[1] - _tmp110 * _x0[0];
  _res[2] = -_tmp105 * _x0[1] + _tmp108 * _x0[0] + _tmp109 * _x0[2] + _tmp110 * _x0[3];
  _res[3] = -_tmp105 * _x0[0] - _tmp108 * _x0[1] + _tmp109 * _x0[3] - _tmp110 * _x0[2];

  return sym::Rot3<Scalar>(_res);
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
