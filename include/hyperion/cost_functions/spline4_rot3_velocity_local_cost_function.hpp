// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <sym/rot3.h>

#include "hyperion/cost_functions/sized_cost_function.hpp"

namespace hyperion {

class Spline4Rot3VelocityLocalCostFunction final
    : public SizedCostFunction<3, ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>,
                               ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>,
                               ConstexprGroupDims<4, 3>> {
 public:
  /// Constructor.
  explicit Spline4Rot3VelocityLocalCostFunction(const Scalar dt,
                                                const Eigen::Matrix<Scalar, 4, 2>& lambdas,
                                                const Eigen::Matrix<Scalar, 3, 1>& velocity,
                                                const Eigen::Matrix<Scalar, 3, 3>& sqrtInfo)
      : dt_{dt}, lambdas_{lambdas}, velocity_{velocity}, sqrt_info_{sqrtInfo} {}

  /// dt accessor.
  [[nodiscard]] auto dt() const -> const Scalar& {
    return dt_;
  }

  /// dt modifier.
  auto dt() -> Scalar& {
    return dt_;
  }

  /// lambdas accessor.
  [[nodiscard]] auto lambdas() const -> const Eigen::Matrix<Scalar, 4, 2>& {
    return lambdas_;
  }

  /// lambdas modifier.
  auto lambdas() -> Eigen::Matrix<Scalar, 4, 2>& {
    return lambdas_;
  }

  /// velocity accessor.
  [[nodiscard]] auto velocity() const -> const Eigen::Matrix<Scalar, 3, 1>& {
    return velocity_;
  }

  /// velocity modifier.
  auto velocity() -> Eigen::Matrix<Scalar, 3, 1>& {
    return velocity_;
  }

  /// sqrtInfo accessor.
  [[nodiscard]] auto sqrtInfo() const -> const Eigen::Matrix<Scalar, 3, 3>& {
    return sqrt_info_;
  }

  /// sqrtInfo modifier.
  auto sqrtInfo() -> Eigen::Matrix<Scalar, 3, 3>& {
    return sqrt_info_;
  }

  /// See documentation of base class.
  /// @note Returns (tangent_dim x tangent_dim) Jacobians stored in column-major order.
  auto evaluate(Scalar const* const* parameters, Scalar* residuals, Scalar** jacobians) const
      -> bool override;

 private:
  Scalar dt_;
  Eigen::Matrix<Scalar, 4, 2> lambdas_;
  Eigen::Matrix<Scalar, 3, 1> velocity_;
  Eigen::Matrix<Scalar, 3, 3> sqrt_info_;
};

}  // namespace hyperion
