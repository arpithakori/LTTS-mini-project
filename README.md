# LTTS-mini-project
# SDLC Activity Based Learning
![Banner](https://github.com/arpithakori/LTTS-mini-project/blob/main/1_Requirements/banner.png)

Image courtesy for banner : GOOGLE Images(https://www.paatham.in/hostel-management.php)

Codacy |
*********************************************************
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/83fd1aca603f49f18480e03a5c32331e)](https://app.codacy.com/gh/arpithakori/LTTS-mini-project?utm_source=github.com&utm_medium=referral&utm_content=arpithakori/LTTS-mini-project&utm_campaign=Badge_Grade_Settings)
<!--[![C/C++ CI](https://github.com/arc-arnob/LnT_Mini_Project/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/arc-arnob/LnT_Mini_Project/actions/workflows/c-cpp.yml)|[![Static Check](https://github.com/arc-arnob/LnT_Mini_Project/actions/workflows/arc-cppcheck.yml/badge.svg)](https://github.com/arc-arnob/LnT_Mini_Project/actions/workflows/arc-cppcheck.yml) | To be added| [![git inspector CI](https://github.com/arc-arnob/LnT_Mini_Project/actions/workflows/arc-gitinspector.yml/badge.svg)](https://github.com/arc-arnob/LnT_Mini_Project/actions/workflows/arc-gitinspector.yml)-->

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/ed40a383ed3b44c691a5f6f29168f6a2)](https://www.codacy.com/gh/arpithakori/LTTS-mini-project/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=arpithakori/LTTS-mini-project&amp;utm_campaign=Badge_Grade)

## Dependency
1. For using justbar module in sample app, include the source code and add the below dependencies in entry/build.gradle to generate hap/support.har.
```groovy
	dependencies {
        implementation fileTree(dir: 'libs', include: ['*.jar', '*.har'])
        testImplementation 'junit:junit:4.13'
        ohosTestImplementation 'com.huawei.ohos.testkit:runner:1.0.0.200'
        implementation project(':justbar')
    }
```
2. For using justbar in separate application using har file, add the har file in the entry/libs folder and add the dependencies in entry/build.gradle file.
```groovy
	dependencies {
		implementation fileTree(dir: 'libs', include: ['*.har'])
		testImplementation 'junit:junit:4.13'
	}
```

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`260204` | Arpitha S Kori  | Able to add new students to the hostel and display the same. Able to allot beds and rooms to the students. Able to calculate the total bill details. | X No     | X No   |X No   |Yes     
   

## Challenges Faced and How Was It Overcome

1. IDE Challenges
2. Writing some functionalities. It was resolved by debugging


