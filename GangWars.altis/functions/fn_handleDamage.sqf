// Prevent player from truly "dying" and allows player to be revived:)
player addEventHandler ["HandleDamage", {
	params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];
	_nonFatalHitboxes = ["arms", "hands", "legs"];
		if (!(_selection in _nonFatalHitboxes) and _damage >= 1) then {
			_damage = 0;
			_unit allowDamage false;
			_unit setDamage 0;
			_unit setUnconscious true;

			format ["%1 was killed by %2", name _unit, name _instigator] remoteExec ["systemChat"];
		};
	[] call life_fnc_hudUpdate;
}];