<html>

<head>
  <meta name="color-scheme" content="light dark">
</head>

<body>
<div align="center">
    <a href="https://github.com/VIS4ROB-lab/hyperion">
        <img width="300" src="resources/images/hyperion_logo.png" alt="">
    </a>
    <br/><br/>
    A high-performance Continuous-Time Gaussian Belief Propagation (CT-GBP) framework with fully
    automated symbolic factor generation and seamless Ceres interoperability targeting
    distributed SLAM operations!
    <br/><br/>
    <a href="https://github.com/VIS4ROB-lab/hyperion/issues">
        Report Issues or Request Features
    </a>
</div>

<br/><br/><br/>

<h1> About </h1>

Hyperion is a novel, modular, distributed, high-performance optimization framework targeting both discrete- and
continuous-time SLAM (Simultaneous Localization and Mapping) applications. It stands out by offering the
first open-source C++ implementation of a Gaussian-Belief-Propagation-based Non-Linear Least Squares solver, which,
in turn, offers native support for decentralized, stochastic inference on factor graphs. In addition, Hyperion also
extends [SymForce](https://github.com/symforce-org/symforce) to automate the generation of high-performance
implementations for spline-related residuals from symbolic, high-level expressions. This results in the fastest,
[Ceres](http://ceres-solver.org)-interoperable B- and Z-Spline implementations, achieving speedups of up to 110x over
previous state-of-the-art methods. Links to [Paper](https://www.ecva.net/papers/eccv_2024/papers_ECCV/papers/04347.pdf),
[Poster](https://eccv2024.ecva.net/media/PosterPDFs/ECCV%202024/2444.png), and
[Video](https://www.youtube.com/watch?v=iubwqTzA8Do).
<br/><br/>

<h3> Citation </h3>

Hyperion was presented at the [European Conference on Computer Vision 2024 (ECCV 2024)](https://eccv2024.ecva.net).
Until the final version of record becomes available, please cite its archived version as follows:

```
@inproceedings{Hug:etal:ECCV2024,
  title={{Hyperion -- A fast, versatile symbolic Gaussian Belief Propagation framework for Continuous-Time SLAM}},  
  author={David Hug and Ignacio Alzugaray and Margarita Chli},
  booktitle={Computer Vision -- ECCV 2024},
  year={2024},
  publisher={Springer Nature Switzerland},
  address={Cham},
  pages={215--231},
  isbn={978-3-031-73404-5},
  doi={10.1007/978-3-031-73404-5_13}
}
```

<h1> Setup and Documentation </h1>

Additional documentation for installing and using Hyperion will be available soon. The framework comprises two main
modules: a Python-based symbolic code generation module and an optimization module for performing inference on general
factor graphs. Currently, three executables are provided: one for demonstrating how to
[set up a minimization problem](apps/pose3_absolute/main.cpp) in Hyperion, and two others for running
[tests](tests/src/hyperion_tests/tests_main.cpp) and
[benchmarks](benchmarks/src/hyperion_benchmarks/benchmarks_main.cpp). Hyperion's API closely mirrors that of
[Ceres](http://ceres-solver.org), offering familiarity for users of that library. Additionally, a
[sample benchmark](benchmarks/benchmark_results.xml) run is included for reference, detailing the metrics reported
in the paper.

<h2> Build </h2>

Tested in Ubuntu 22.04.

1. install ros2 humble, colcon, ament-cmake-catch2, libabsl-dev, libgflags-dev, python3-catkin-pkg

2. build and install locally glog, ceres solver from source

3. build and install locally symforce 0.9.0 from source in conda venv test_env

```
cd symforce-0.9.0
pip install -r dev_requirements.txt
# May need to specify some package version
# pip install skymarshal==0.9.0
# pip install jinja2==3.1.2
# pip install click==8.1.3
# pip install flask==3.0.3

mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/home/pi/Documents/slam_devel
make -j4
make install
```

4. pip install catkin_pkg in test_env

5. build hyperion

```
conda activate test_env
source /opt/ros/humble/setup.bash
cd hyperion_ws
colcon build --cmake-args -DCeres_DIR=/home/pi/Documents/slam_devel/lib/cmake/Ceres -Dglog_DIR=/home/pi/Documents/slam_devel/lib/cmake/glog
```

6. run app
```
cd hyperion_ws
source install/setup.bash
./build/hyperion/apps/pose3_absolute/main_pose3_absolute
```

7. debug in qtcreator
```
open the build/hyperion/apps folder in qtcreator
```

<br/><br/>

<div align="center">
    <a href="https://github.com/VIS4ROB-lab/hyperion">
        <img width="600" src="resources/images/poster.png" alt="">
    </a>
</div>

<br/><br/>


<div align="center">
    <h3> Contact </h3>
    Admin - <a href="mailto:dhug@ethz.ch">David Hug</a>, Leonhardstrasse 21, 8092 Zürich, ETH Zürich, Switzerland
</div>

<div align="center">
    <h3> License </h3>
    Hyperion is distributed under the <a href="LICENSE">BSD-3-Clause License</a>
    <br/><br/><br/>
    <a href="https://asl.ethz.ch/v4rl">
        <source srcset="resources/images/v4rl_logo_light.png" media="(prefers-color-scheme: dark)">
    	<img width="150" src="resources/images/v4rl_logo_dark.png">
    </a>
</div>
</body>

</html>