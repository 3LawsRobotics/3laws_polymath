# 3Laws Diagnostic Module - Changelog
All notable changes to this project will be documented in this file.
This project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.9.1] - 2023-10-09
### Release highlights
* Minor update
### New
* N/A
### Improvements
* All specified signals and nodes show up in dashboard as soon as RDM turned on
* Improved config documentation
### Bug fixes
* Fix finite state node id


## [0.9.0] - 2023-10-04
### Release highlights
* Automated node configuration generation
### New
* Link from the robot category health timeline to the corresponding dashboard
* Node are automatically generated for each category (sensor, control, localization, mission manager, etc.)
* Disable default ROS network discovery
### Improvements
* Better logging for unexpected message
### Bug fixes
* Fix node timeout incident metric

## [0.8.0] - 2023-08-29
### Release highlights
* ROS1 generic subscriber
### New
* Event panel have a clickable link to set the time range to the corresponding event
* ClickHouse database integration
### Improvements
* better library management
* New RDM readme
### Bug fixes
* Less dashboards pop-up errors

## [0.7.0] - 2023-07-26
### Release highlights
* ROS1 integration
### New
* Supervisor panel and supervisor integration
* Path planning consistency dashboard
### Improvements
* automatic state timeline color palette
* Improved config documentation
### Bug fixes
* Plenty of dashboard fixes
* Fix bad library implementation leading to segfault

## [0.6.0] - 2023-07-12
### Release highlights
* Incident detection
### New
* Incident detection panel in dashboard
* Path planning consistency metric (dashboard coming soon)
### Improvements
* Only publish signal health if meaningful
* Added masking option for almost all inputs
* Improved config documentation
### Bug fixes
* Plenty of dashboard fixes
* Fix race condition leading to segfault

## [0.5.8] - 2022-06-21
### Release highlights
* Model based metrics
### New
* Added behavior model to config
* Added dynamical model consistency dashboard
* Added laserscan noise metric
* Added finite state metric - used to log finite states of the robot. Displayed on robot overview dashboard.
* Added text log metric - can be used to log everything published on /rosout
### Improvements
* Improved config file format
* Can now specify config file name and search paths - added more default search paths
* Can specify launch options and external config file in docker mode
* Generate more signal and node health for more subsystems
* Improved state timeline visualization in various dashboards
* Improved readme
### Bug fixes
* Diagnostic module not restarting when crashing and installed with autostart in docker mode
* Diagnostic module not starting when installed with autostart in package mode

## [0.5.7] - 2022-06-13
### Release highlights
* Sensor obstruction metric
### New
* New sensor obstruction metric and visualization
* Added changelog
### Improvements
* Clock health metric publishes utc/rtc offset data even if no external clock is monitored
### Bug fixes
None


## [0.5.6] - 2023-06-07
### Release highlights
* User configurable module
### New
* User can now configure diagnostic module himself via the config file : `config/rdm.yaml`
### Improvements
* Most dashboards now have thresholds displayed
### Bug fixes
* Foxy version crashing because of spdlog version conflict
