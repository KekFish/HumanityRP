@echo off

cd /D "%~dp0"



IF exist "P:\HumanityRP" (
Rem	echo Removing existing link P:\BountyHunter
	rmdir "P:\HumanityRP"
)

Rem echo Creating link P:\BountyHunter
mklink /J "P:\HumanityRP\" "%cd%"

echo Done