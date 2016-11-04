function blockEqual(first, second)
	if(first.name == nil) or (second.name == nil) then
		return false
	elseif (first.name == second.name)
		and (first.metadata == second.metadata) then
			return true
	else
		return false
	end
end
-- Questa: private
local function blockMatch(first, secondo)
	if (not first.name) or (not secondo) then
		return false
	end
	local primo = string.lower(first.name)
	secondo = string.lower(secondo)
	local value = string.find(primo, secondo)
	if value then
		return true
	else
		return false
	end
end


function forwardIs(strg)
	local success,data = turtle.inspect()
	return blockMatch(data, strg)
end

function DownIs(strg)
	local success,data = turtle.inspectDown()
	return blockMatch(data, strg)
end

function UpIs(strg)
	local success,data = turtle.inspectUp()
	return blockMatch(data, strg)
end
