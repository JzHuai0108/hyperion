// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/rot2.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: retract_rot2
 *
 * Args:
 *     value: Rot2
 *     tau: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Rot2
 *     res_D_value: (1x1) jacobian of res (1) wrt arg value (1)
 *     res_D_tau: (1x1) jacobian of res (1) wrt arg tau (1)
 */
template <typename Scalar>
sym::Rot2<Scalar> RetractRot2WithJacobians(const sym::Rot2<Scalar>& value,
                                           const Eigen::Matrix<Scalar, 1, 1>& tau,
                                           const Scalar epsilon,
                                           Eigen::Matrix<Scalar, 1, 1>* const res_D_value = nullptr,
                                           Eigen::Matrix<Scalar, 1, 1>* const res_D_tau = nullptr) {
  // Total ops: 13

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 2, 1>& _value = value.Data();

  // Intermediate terms (7)
  const Scalar _tmp0 = std::cos(tau(0, 0));
  const Scalar _tmp1 = std::sin(tau(0, 0));
  const Scalar _tmp2 = _tmp0 * _value[0] - _tmp1 * _value[1];
  const Scalar _tmp3 = _tmp0 * _value[1];
  const Scalar _tmp4 = _tmp1 * _value[0];
  const Scalar _tmp5 = _tmp3 + _tmp4;
  const Scalar _tmp6 = std::pow(_tmp2, Scalar(2)) - _tmp5 * (-_tmp3 - _tmp4);

  // Output terms (3)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res[0] = _tmp2;
  _res[1] = _tmp5;

  if (res_D_value != nullptr) {
    Eigen::Matrix<Scalar, 1, 1>& _res_D_value = (*res_D_value);

    _res_D_value(0, 0) = _tmp6;
  }

  if (res_D_tau != nullptr) {
    Eigen::Matrix<Scalar, 1, 1>& _res_D_tau = (*res_D_tau);

    _res_D_tau(0, 0) = _tmp6;
  }

  return sym::Rot2<Scalar>(_res);
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
